/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_no_acsii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:31 by nahmed-m          #+#    #+#             */
/*   Updated: 2017/02/12 17:22:24 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../../framework/libft/includes/libft.h"

int		acsii_test(void)
{
	char *str;

	str = "SEX !";
	ft_strcpy("dwdwdwdqqwdqwd", str);
	if (str == NULL)
		return (0);
	else
		return (-1);
}
