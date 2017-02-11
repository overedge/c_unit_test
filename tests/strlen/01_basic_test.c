/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:37:20 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 13:49:03 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../framework/libft/includes/libft.h"

int		basic_test(void)
{
	if (ft_strlen("hello") == strlen("hello"))
		return (0);
	else
		return (-1);
}
