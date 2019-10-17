/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:49:20 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/12 00:17:57 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	i = 0;
	out = NULL;
	if (s && *s && (out = ft_memalloc(len + 1)))
	{
		while (i < len)
		{
			out[i] = s[start + i];
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}
