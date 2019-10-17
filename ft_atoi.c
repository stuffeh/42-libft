/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:46:18 by tyeung            #+#    #+#             */
/*   Updated: 2019/07/15 21:46:21 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		ispos;

	ispos = 1;
	while (ty_haswhitespace(*str) == 1)
		str++;
	if ((str[0] == '+' || (str[0] == '-')) && (ft_isdigit(str[1])))
	{
		if (*str == '-')
			ispos = -1;
		str++;
	}
	return (ty_atoi(str, ispos, 0, 0));
}
