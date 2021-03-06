/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101_test.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:29:14 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:01:39 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_101_TEST_H
# define UNIT_101_TEST_H

# include "../../framework/includes/libunit.h"

# define ACTIVATE 1
# define NO_ACTIVATE 0
# define STRLEN ACTIVATE

/*
*** DECLARATION OF EACH LAUCHER 00_LIKE
*/
int		strlen_launcher(void);
/*
*** DECLARATION OF EACH TEST FOR 1ST LOADER
*/
int		basic_test(void);
int		null_test(void);
int		acsii_test(void);
int		abort_test(void);
#endif
