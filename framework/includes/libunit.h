/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:00:06 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 16:10:20 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

typedef struct	s_unit_test
{
	int			(*ptr_for_test)(void);
	char		*label_test;
	struct		s_unit_test *next;
}				t_unit_test;


void			load_test(t_unit_test **list, char *label_test, int(*f)(void));
int				launch_tests(t_unit_test **list);
#endif
