/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:04:03 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:04:16 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/real_tests.h"

int	strdup_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("STRDUP :\n");
	load_test(&testlist, "Basic test", &strdup_basic_test, 1);
	return (launch_tests(&testlist));
}
