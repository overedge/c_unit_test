/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:09:53 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 19:12:00 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void		load_test(t_unit_test **list, char *label, int(*f)(void), int act)
{
	t_unit_test *tmp;
	t_unit_test *new;

	if (act == 1)
	{
		tmp = *list;
		new = (t_unit_test*)malloc(sizeof(t_unit_test));
		new->label_test = ft_strnew(ft_strlen(label));
		ft_strcpy(new->label_test, label);
		new->ptr_for_test = f;
		new->next = NULL;
		if (!tmp)
			*list = new;
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
		}
		g_piece++;
	}
}

void		start_test()
{
	ft_printf("*********************************************\n");
	ft_printf("************ - 42 TEST FOR RUSH - ***********\n");
	ft_printf("*********************************************\n");
}

void		finish_test()
{
	if (g_piece_error != 0)
		ft_printf("\n \033[1;31m❌\t %d TESTS REUSSI SUR %d \033[m\n",\
				g_piece - g_piece_error, g_piece);
	else
		ft_printf("\n \033[1;32m✅ \t%d/%d TESTS REUSSI\033[m\n", g_piece,\
				g_piece);
	g_piece_error = 0;
	g_piece = 0;
}
