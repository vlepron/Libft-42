/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:52:07 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 06:28:44 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 && s2)
	{
		i = ft_strlen((char*)s1);
		j = ft_strlen((char*)s2);
		if (!(str = malloc(sizeof(char) * (i + j))))
			return (NULL);
		ft_strcpy(str, (char*)s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (0);
}
