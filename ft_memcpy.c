/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:27:02 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 04:55:41 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*p2;
	size_t	i;

	i = -1;
	p = dst;
	p2 = (char *)src;
	while (++i < n)
		*(p + i) = *(p2 + i);
	return (dst);
}
