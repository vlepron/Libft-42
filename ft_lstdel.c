/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 05:32:47 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 07:23:45 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *l;
	t_list *n;

	l = *alst;
	while (l)
	{
		n = l->next;
		del(l->content, l->content_size);
		free(l);
		l = n;
	}
	*alst = NULL;
}
