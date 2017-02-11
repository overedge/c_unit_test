/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:09:53 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 14:51:56 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void		load_test(t_unit_test **list, char *label_test, int(*f)(void))
{
	t_unit_test *tmp;
	t_unit_test *new;

	tmp = *list;
	
	new = (t_unit_test*)malloc(sizeof(t_unit_test));
	new->label_test = ft_strnew(ft_strlen(label_test));
	ft_strcpy(new->label_test, label_test);
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
}
