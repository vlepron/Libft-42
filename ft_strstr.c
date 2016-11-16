/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:46:20 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/15 05:50:14 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int j;
	int bl_found;

	bl_found = 0;
	if (!*little)
		return ((char*)big);
	while (*big && !bl_found)
	{
		if (*little == *big)
		{
			j = 0;
			bl_found = 1;
			while (little[j])
			{
				if (*(big + j) != little[j])
					bl_found = 0;
				j++;
			}
		}
		big++;
	}
	return (bl_found ? (char*)big - 1 : 0);
}
