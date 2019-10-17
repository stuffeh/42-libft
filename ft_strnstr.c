/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:51:04 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/11 23:51:52 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (ty_charcomp(haystack[i + j], needle[j]) && (i + j < len))
		{
			if (needle[j + 1] == '\0')
			{
				while (i > 0)
				{
					haystack++;
					i--;
				}
				return ((char *)haystack);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
