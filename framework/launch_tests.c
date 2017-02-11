/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:09:48 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 19:44:47 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libunit.h"

static void	ft_signal(int signal)
{
	if (signal == SIGSEGV)
		exit(11);
	else if (signal == SIGBUS)
		exit(10);
	else
		exit(14);
}

static int	virtual_exec(int (*f)(void))
{
	pid_t			father;
	int				retour;
	int				i;

	father = fork();
	if (father > 0)
		wait(&retour);
	else
	{
		i = 1;
		while (i < 32)
			signal(i++, ft_signal);
		exit(f());
	}
	return (WEXITSTATUS(retour));
}

int			launch_tests(t_unit_test **list)
{
	t_unit_test		*tmp;
	int				is_error;
	int				error;

	tmp = *list;
	is_error = 0;
	error = 0;
	while (tmp)
	{
		ft_printf("\t> %s\t", tmp->label_test);
		is_error = virtual_exec(tmp->ptr_for_test);
		tmp = tmp->next;
		if (is_error == 0)
			ft_printf("\033[1;32m[OK]\033[m\n");
		else if (is_error == SIGSEGV)
			ft_printf("\033[1;31m[SIGV]\033[m\n");
		else if (is_error == SIGBUS)
			ft_printf("\033[1;31m[BUSE]\033[m\n");
		else
			ft_printf("\033[1;31m[KO]\033[m\n");
		if (is_error != 0)
			g_piece_error++;
	}
	return (error);
}
