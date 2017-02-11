/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_no_acsii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:31 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 16:44:33 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../framework/libft/includes/libft.h"
#include <sys/mman.h>

int		acsii_test(void)
{
	char *str;

	strcpy("dwdwd", str);
	if (str == NULL)
		return (1);
	else
		return (-1);
}
