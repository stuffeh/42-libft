/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:54:45 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/11 23:54:47 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t count;

	count = 0;
	if (dst || src)
	{
		if (src >= dst)
		{
			while (count < len)
			{
				((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
				count++;
			}
		}
		else
		{
			while (len > 0)
			{
				len--;
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			}
		}
	}
	return (dst);
}
