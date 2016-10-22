#include "libft.h"

char *ft_strcat(char *dest, char *src, unsigned int nb)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    j++;
  while (src[j] && (j < nb))
  {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j] = '\0';
  return (dest);
}
