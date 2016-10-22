#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *src, int n)
{
	while (*src && *src != (char)n)
		src++;
	if (*src != (char)n)
		return (NULL);
	else
		return ((char*)s);
}
