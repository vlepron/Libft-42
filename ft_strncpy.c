#include "libft.h"

char *ft_strncpy(char *dest, char *src, unsigned int len)
{
  unsigned int i;

  i = 0;
  while (src[i] && (i < len))
  {
    dest[i] = src[i];
    i++;
  }
  while (i < len)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}
