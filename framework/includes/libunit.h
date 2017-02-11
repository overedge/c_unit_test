/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:00:06 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 19:27:38 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include "../libft/includes/libft.h"

int		g_piece;
int		g_piece_error;

typedef struct	s_unit_test
{
	int			(*ptr_for_test) (void);
	char		*label_test;
	struct		s_unit_test *next;
}				t_unit_test;

void			load_test(t_unit_test **list, char *label, int(*f)(void),\
				int act);
int				launch_tests(t_unit_test **list);
void			start_test(void);
void			finish_test(void);
#endif
