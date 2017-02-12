/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memset_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:09:31 by framel            #+#    #+#             */
/*   Updated: 2017/02/12 17:09:51 by framel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/real_tests.h"

int	memset_basic_test(void)
{
	int		test_len;
	int		ret;
	char	*in;
	char	*out;

	test_len = 100;
	in = (char *)malloc(sizeof(char) * test_len);
	out = (char *)malloc(sizeof(char) * test_len);
	memset(in, 'a', test_len);
	ft_memset(out, 'a', test_len);
	ret = strncmp(in, out, test_len);
	free(in);
	free(out);
	if (ret)
		return (-1);
	else
		return (0);
}
