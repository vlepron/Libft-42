/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 23:16:37 by vlepron           #+#    #+#             */
/*   Updated: 2016/11/16 02:49:33 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_table(char const *s, char c)
{
	int	cpt;

	cpt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			cpt++;
		while (*s && (!(*s == c)))
			s++;
	}
	return (cpt);
}

static int		count_letter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && (!(*s == c)))
	{
		i++;
		s++;
	}
	return (i);
}

static int		ft_cpy(char *dest, char const *s, char c)
{
	int i;

	i = 0;
	while (*s && (!(*s == c)))
	{
		*dest = *s;
		i++;
		dest++;
		s++;
	}
	*dest = '\0';
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		sp;

	sp = 0;
	if (s)
	{
		if (!(tab = (char**)malloc(sizeof(*tab) * (ft_table(s, c) + 1))))
			return (NULL);
		while (*s && *s == c)
			s++;
		while (*s)
		{
			if (!(tab[sp] = (char*)malloc(sizeof(**tab) * (count_letter(s, c)
								+ 1))))
				return (NULL);
			s += ft_cpy(tab[sp], s, c);
			sp++;
			while (*s && *s == c)
				s++;
		}
		tab[sp] = 0;
		return (tab);
	}
}
