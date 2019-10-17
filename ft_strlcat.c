/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 19:26:48 by tyeung            #+#    #+#             */
/*   Updated: 2019/09/30 19:26:50 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, maxlen);
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < (maxlen - dstlen))
	{
		dst = ft_strncat(dst, src, srclen);
	}
	else
	{
		dst = ft_strncat(dst, src, maxlen - dstlen - 1);
	}
	return (dstlen + srclen);
}
