#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int bl_found;

	bl_found = 0;
	if (!*to_find)
		return (str);
	while (*str && !bl_found)
	{
		if (*to_find == *str)
		{
			j = 0;
			bl_found = 1;
			while (to_find[j])
			{
				if (*(str + j) != to_find[j])
					bl_found = 0;
				j++;
			}
		}
		str++;
	}
	return (bl_found ? str - 1 : 0);
}
