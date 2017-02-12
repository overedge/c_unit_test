/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_null_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:08:44 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:09:42 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/real_tests.h"

int	atoi_null_test(void)
{
	int		in;
	int		out;
	char	*nbr_test;

	nbr_test = NULL;
	in = atoi(nbr_test);
	out = ft_atoi(nbr_test);
	if (in - out)
		return (-1);
	else
		return (0);
}
