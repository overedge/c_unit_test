/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_negative_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:06:42 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:11:11 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/real_tests.h"

int	atoi_negative_test(void)
{
	int		in;
	int		out;
	char	*nbr_test;

	nbr_test = ft_strdup("-123");
	in = atoi(nbr_test);
	out = ft_atoi(nbr_test);
	free(nbr_test);
	if (in - out)
		return (-1);
	else
		return (0);
}
