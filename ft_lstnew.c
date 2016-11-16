/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 05:21:30 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 08:29:19 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if (!(l = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content && content_size > 0)
	{
		if (!(l->content = ft_memalloc(content_size)))
		{
			free(l);
			return (NULL);
		}
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	else
	{
		l->content = NULL;
		l->content_size = 0;
	}
	l->next = NULL;
	return (l);
}
