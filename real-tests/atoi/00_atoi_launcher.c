/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:05:13 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:11:33 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/real_tests.h"

int	atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("ATOI :\n");
	load_test(&testlist, "Basic test", &atoi_basic_test, 1);
	load_test(&testlist, "Negative test", &atoi_negative_test, 1);
	load_test(&testlist, "Alpha test", &atoi_alpha_test, 1);
	load_test(&testlist, "Overflow test", &atoi_overflow_test, 1);
	load_test(&testlist, "Null test", &atoi_null_test, 0);
	return (launch_tests(&testlist));
}
