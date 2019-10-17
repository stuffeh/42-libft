/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:01:24 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 19:01:25 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *out;

	if ((out = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (content)
		{
			out->content = ft_memalloc(content_size);
			if (out->content)
				ft_memcpy(out->content, content, content_size);
			else
			{
				ft_memdel((void **)&out);
				return (out);
			}
		}
		else
		{
			content_size = 0;
			out->content = NULL;
		}
		out->content_size = content_size;
		out->next = NULL;
	}
	return (out);
}
