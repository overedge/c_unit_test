/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:37:30 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:17:35 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/unit_101_test.h"

int		strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("TESTS FOR TESTS :\n");
	load_test(&testlist, "Basic test", &basic_test, ACTIVATE);
	load_test(&testlist, "NULL TEST", &null_test, ACTIVATE);
	load_test(&testlist, "NO ACSII", &acsii_test, ACTIVATE);
	load_test(&testlist, "ABORT TEST", &abort_test, ACTIVATE);
	return (launch_tests(&testlist));
}
