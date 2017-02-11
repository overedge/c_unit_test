#include <string.h>
#include "../includes/real_tests.h"

int strcmp_null_test(void)
{
  char	*str_test;
  int	in;
  int	out;

  str_test = NULL;
  in = strcmp(str_test, str_test);
  out = ft_strcmp(str_test, str_test);
  if (in - out)
    return (-1);
  else
    return (0);
}
