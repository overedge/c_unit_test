#include "../includes/real_tests.h"

int strdup_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("STRDUP :\n");
  load_test(&testlist, "Basic test", &strdup_basic_test, 1);
  return (launch_tests(&testlist));
}
