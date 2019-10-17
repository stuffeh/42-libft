/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:17:17 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/12 00:17:18 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*cha;

	count = 0;
	cha = (unsigned char *)s;
	while (count < n)
	{
		if (*cha == (unsigned char)c)
		{
			return ((char *)cha);
		}
		cha++;
		count++;
	}
	return (NULL);
}
