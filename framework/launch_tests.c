/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:09:48 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 15:17:51 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"



static int	virtual_exec(int(*f)(void))
{
	f(); // LANCEMENT DE LA FONCTION
	return (1); // RENVOI DU CODE DE RETOUR SELON WAIT
}

int			launch_tests(t_unit_test **list)
{
	t_unit_test		*tmp;
	int				is_error;


	tmp = *list;
	is_error = 0;
	while (tmp)
	{
		ft_printf("\t> %s\t", tmp->label_test);
		is_error += virtual_exec(tmp->ptr_for_test);
		tmp = tmp->next;
		ft_printf("\n");
	}
	if (is_error != 0)
		return (-1);
	return (is_error);
}
