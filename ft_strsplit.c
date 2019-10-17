/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:58:23 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 18:58:26 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ty_strntrim(char *s, char c)
{
	size_t	start;
	size_t	stop;
	char	*out;

	start = 0;
	out = NULL;
	if (!s)
		return (out);
	stop = ft_strlen(s);
	while (s[start] && s[start] == c)
		start++;
	while (s[stop] && s[stop - 1] == c)
		stop--;
	if (stop < start)
		stop = start;
	out = ft_strncpy(s, s + start, stop - start);
	s[stop - start] = '\0';
	return (out);
}

static size_t	ty_charsearch(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	s = ty_strntrim(s, c);
	while (s[i] != '\0')
	{
		if (s[i] && s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static char		*ty_retword(char *s, char c)
{
	size_t	i;
	char	*out;

	out = NULL;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if ((out = ft_strnew((sizeof(char *) * (i + 1)))))
		out = ft_strncpy(out, s, i);
	s = ft_strcpy(s, s + i);
	s = ty_strntrim(s, c);
	return (out);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**out;
	char	*ss;

	out = NULL;
	if (!c || !s || !(ss = ft_strdup(s)))
		return (out);
	i = 0;
	words = ty_charsearch(ss, c);
	if ((out = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
	{
		while (i < words)
			out[i++] = ty_retword(ss, c);
	}
	return (out);
}
