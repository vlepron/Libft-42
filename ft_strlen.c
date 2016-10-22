#include "libft.h"

int ft_strlen(char *s1)
{
  int a;

  a = 0;
  while (s1[a])
    a++;
  return (a);
}
