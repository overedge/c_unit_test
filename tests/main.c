/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:28:18 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 18:54:28 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/unit_101_test.h"
#include "../framework/includes/libunit.h"

int		main(int argc, char **argv)
{
	start_test();
	if (STRLEN)
		strlen_launcher();
	finish_test();
	if (g_piece_error != 0)
		return (-1);
	return (0);
}
