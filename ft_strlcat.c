#include "libft.h"
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	k = i;
	i = 0;
	while (src[i] != '\0' && ((j + i) < (size - 1)))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (k + ((j < size) ? j : size));
}
