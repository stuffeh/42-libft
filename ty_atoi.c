/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ty_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 20:22:17 by tyeung            #+#    #+#             */
/*   Updated: 2019/09/30 20:22:19 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ty_atoi(const char *str, int ispos, int len, int sentinel)
{
	int				count;
	unsigned long	num;

	count = 0;
	num = 0;
	while (ft_isdigit(str[count]) == 1)
	{
		if ((str[count] != '0') || (sentinel == 1))
		{
			len++;
			sentinel = 1;
		}
		num = 10 * num + (str[count] - '0');
		count++;
	}
	if (len >= 19)
		return (ispos == -1) ? 0 : -1;
	if (num >= (unsigned long)9223372036854775807U && ispos == 1)
		return (-1);
	else if (num >= (unsigned long)9223372036854775808U && ispos == -1)
		return (0);
	else
		return (num * ispos);
}
