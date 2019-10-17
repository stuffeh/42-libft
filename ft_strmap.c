/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:00:52 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 19:00:57 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*out;

	i = 0;
	out = NULL;
	if (s && f && (out = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			out[i] = (*f)(s[i]);
			++i;
		}
	}
	return (out);
}
