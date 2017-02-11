/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bzero_basic_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:07:49 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 21:08:07 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/real_tests.h"

int bzero_basic_test(void)
{
  int test_len;
  int ret;
  char *in;
  char *out;

  test_len = 100;
  in = (char *)malloc(sizeof(char) * test_len);
  out = (char *)malloc(sizeof(char) * test_len);
  bzero(in, test_len);
  ft_bzero(out, test_len);
  ret = strncmp(in, out, test_len);
  free(in);
  free(out);
  if (ret)
    return (-1);
  else
    return (0);
}
