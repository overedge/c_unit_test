#include <string.h>
#include "../includes/real_tests.h"

int strchr_nomatch_test(void)
{
  char	*str_test;
  char	*in;
  char	*out;

  str_test = ft_strdup("Une chaine de test.");
  in = strchr(str_test, 'y');
  out = ft_strchr(str_test, 'y');
  free(str_test);
  if (in == out)
    return (0);
  else
    return (-1);
}
