/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strstr_nomatch_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:02:17 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:03:26 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/real_tests.h"

int	strstr_nomatch_test(void)
{
	char	*str_big;
	char	*str_little;
	char	*in;
	char	*out;

	str_big = ft_strdup("Une chaine de test.");
	str_little = ft_strdup("es.");
	in = strstr(str_big, str_little);
	out = ft_strstr(str_big, str_little);
	free(str_big);
	free(str_little);
	if (in == out)
		return (0);
	else
		return (-1);
}
