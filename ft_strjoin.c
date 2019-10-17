/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:53:10 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/11 23:53:12 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*out;

	i = 0;
	j = 0;
	if (s1)
		i = ft_strlen(s1);
	if (s2)
		j = ft_strlen(s2);
	count = 0;
	if (!(out = ft_memalloc(i + j + 1)))
		return (NULL);
	while (count++ < i)
		out[count - 1] = s1[count - 1];
	count = 0;
	while (count++ < j)
		out[count + i - 1] = s2[count - 1];
	return (out);
}
