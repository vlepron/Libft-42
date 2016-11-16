/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:34:50 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 07:13:17 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*p;
	char	*s;

	p = (char *)dst;
	s = (char *)src;
	while (n)
	{
		if ((*p++ = *s++) == c)
			return (p);
		n--;
	}
	return (NULL);
}
