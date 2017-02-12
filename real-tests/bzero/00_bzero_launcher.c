/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:06:32 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:13:35 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/real_tests.h"

int	bzero_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ft_printf("BZERO :\n");
	load_test(&testlist, "Basic test", &bzero_basic_test, 1);
	return (launch_tests(&testlist));
}
