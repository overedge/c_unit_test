/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memset_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:09:18 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:09:24 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/real_tests.h"

int	memset_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("MEMSET :\n");
	load_test(&testlist, "Basic test", &memset_basic_test, 1);
	return (launch_tests(&testlist));
}
