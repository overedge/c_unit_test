/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcmp_harder_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:07:23 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:08:36 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/real_tests.h"

int	strcmp_harder_test(void)
{
	char	*str_one;
	char	*str_two;
	int		in;
	int		out;

	str_one = ft_strdup("a basic long string...");
	str_two = ft_strdup("a basic long string!!!");
	in = strcmp(str_one, str_two);
	out = ft_strcmp(str_one, str_two);
	free(str_one);
	free(str_two);
	if (in - out)
		return (-1);
	else
		return (0);
}
