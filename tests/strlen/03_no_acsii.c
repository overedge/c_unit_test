/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_no_acsii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:31 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/11 17:13:19 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../framework/libft/includes/libft.h"

int		acsii_test(void)
{
	char *str;

	strcpy("dwdwdwdqqwdqwd", str);
	if (str == NULL)
		return (0);
	else
		return (-1);
}
