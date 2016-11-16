/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:45:30 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 06:02:18 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	k = i;
	i = 0;
	while (src[i] != '\0' && ((j + i) < (size - 1)))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (k + ((j < size) ? j : size));
}
