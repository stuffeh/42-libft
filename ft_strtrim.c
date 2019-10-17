/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:00:16 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 19:00:19 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	stop;
	char	*out;

	start = 0;
	out = NULL;
	if (!s)
		return (out);
	stop = ft_strlen(s);
	while (ty_haswhitespace(s[start]))
	{
		start++;
	}
	while (ty_haswhitespace(s[stop - 1]))
	{
		stop--;
	}
	if (stop < start)
	{
		stop = start;
	}
	if ((out = ft_strnew(stop - start)))
		ft_strncpy(out, s + start, stop - start);
	return (out);
}
