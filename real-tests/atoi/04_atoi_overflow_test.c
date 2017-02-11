#include <stdlib.h>
#include "../includes/real_tests.h"

int atoi_overflow_test(void)
{
  int in;
  int out;
  char *nbr_test;

  nbr_test = ft_strdup("2147483648");
  in = atoi(nbr_test);
  out = ft_atoi(nbr_test);
  free(nbr_test);
  if (in - out)
    return (-1);
  else
    return (0);
}
