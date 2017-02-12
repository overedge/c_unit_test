/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcmp_lenght_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:06:58 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:07:11 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/real_tests.h"

int	strcmp_lenght_test(void)
{
	char	*str_one;
	char	*str_two;
	int		in;
	int		out;

	str_one = ft_strdup("a basic long string...");
	str_two = ft_strdup("a shorter one.");
	in = strcmp(str_one, str_two);
	out = ft_strcmp(str_one, str_two);
	free(str_one);
	free(str_two);
	if (in - out)
		return (-1);
	else
		return (0);
}
