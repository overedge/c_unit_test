#include <string.h>
#include "../includes/real_tests.h"

int strstr_basic_test(void)
{
  char	*str_big;
  char	*str_little;
  char	*in;
  char	*out;

  str_big = ft_strdup("Une chaine de test.");
  str_little = ft_strdup("es");
  in = strstr(str_big, str_little);
  out = ft_strstr(str_big, str_little);
  free(str_big);
  free(str_little);
  if (in == out)
    return (0);
  else
    return (-1);
}
