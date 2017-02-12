/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strchr_multi_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:00:34 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:01:36 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/real_tests.h"

int	strchr_multi_test(void)
{
	char	*str_test;
	char	*in;
	char	*out;

	str_test = ft_strdup("Une chaine de test.");
	in = strchr(str_test, 'e');
	out = ft_strchr(str_test, 'e');
	free(str_test);
	if (in == out)
		return (0);
	else
		return (-1);
}
