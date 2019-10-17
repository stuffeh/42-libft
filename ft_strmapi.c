/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:00:40 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 19:00:45 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	i = 0;
	out = NULL;
	if (s && f && (out = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			out[i] = (*f)(i, s[i]);
			++i;
		}
	}
	return (out);
}
