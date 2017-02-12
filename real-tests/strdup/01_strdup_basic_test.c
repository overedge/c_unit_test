#include <string.h>
#include <stdlib.h>
#include "../includes/real_tests.h"

int strdup_basic_test(void)
{
  char	*str_test;
  char	*in;
  char	*out;
  int	ret;

  str_test = ft_strdup("Une chaine de test.");
  in = strdup(str_test);
  out = ft_strdup(str_test);
  ret = ft_strcmp(in, out);
  free(str_test);
  free(in);
  free(out);
  if (ret)
    return (-1);
  else
    return (0);
}
