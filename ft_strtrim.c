/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 05:11:52 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 08:27:50 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	first;
	size_t	last;
	size_t	len;
	char	*str;

	first = 0;
	last = 0;
	if (!s)
		return (0);
	len = ft_strlen((char*)s);
	while (s[--len] == ' ' || s[len] == '\t' || s[len] == '\n')
		last++;
	if (len == 0)
		return (NULL);
	while (s[first] == ' ' || s[first] == '\t' || s[first] == '\n')
		first++;
	len = ft_strlen((char*)s) - (first + last);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (ft_strnew(0));
	last = -1;
	while (++last < len)
		str[last] = s[last + first];
	str[last] = '\0';
	return (str);
}
