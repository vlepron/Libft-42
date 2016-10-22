#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *src, int c)
{
	char *pos;

	pos = NULL;
	while (*src)
	{
		if (*src == (char)c)
			pos = (char*)src;
		src++;
	}
	if (*src == (char)c)
		return ((char*)src);
	else
		return (pos);
}
