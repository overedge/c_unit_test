/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:02:03 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:03:00 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/real_tests.h"

int	strstr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("STRSTR :\n");
	load_test(&testlist, "Basic test", &strstr_basic_test, 1);
	load_test(&testlist, "No Match test", &strstr_nomatch_test, 1);
	return (launch_tests(&testlist));
}
