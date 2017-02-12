/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcmp_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:19:36 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:08:18 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/real_tests.h"

int	strcmp_basic_test(void)
{
	char	*str_test;
	int		in;
	int		out;

	str_test = ft_strdup("a basic string...");
	in = strcmp(str_test, str_test);
	out = ft_strcmp(str_test, str_test);
	free(str_test);
	if (in - out)
		return (-1);
	else
		return (0);
}
