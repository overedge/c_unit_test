/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:15:17 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 21:22:20 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/real_tests.h"

int	main(void)
{
  int		error;
  
  error = 0;
  start_test();
  if (MEMSET)
    memset_launcher();
  if (BZERO)
    bzero_launcher();
  if (ATOI)
    atoi_launcher();
  if (STRCMP)
    strcmp_launcher();
  if (STRDUP)
    strdup_launcher();
  if (STRSTR)
    strstr_launcher();
  if (STRCHR)
    strchr_launcher();
  error = g_piece_error;
  finish_test();
  if (error != 0)
    return (-1);
  return (0);
}
