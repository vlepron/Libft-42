#include "libft.h"
#include <string.h>

char  *ft_strnstr(const char *str, const char *to_find, size_t n)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  while (str[i] && to_find[j] && i < n)
  {
    if (str[i] == to_find[j])
      j++;
    else
    {
        i -= j;
        j = 0;
    }
    i++;
  }
  if (to_find[j] = '\0')
    return ((char*)(str + i - j));
  return (NULL);
}
