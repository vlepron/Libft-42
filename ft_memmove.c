/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:56:08 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 05:50:41 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p;
	const char	*p2;

	p = dst;
	p2 = src;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	p += len;
	p2 += len;
	while (len--)
		*--p = *--p2;
	return (dst);
}
