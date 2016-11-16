/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:39:31 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 07:53:59 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *d;

	if (!s)
		return (NULL);
	if (!(d = (char*)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	d = ft_strncpy(d, &s[start], len);
	d[len] = '\0';
	return (d);
}
