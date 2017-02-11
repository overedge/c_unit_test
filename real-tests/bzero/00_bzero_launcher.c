#include "../includes/real_tests.h"

int bzero_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("BZERO :\n");
  load_test(&testlist, "Basic test", &bzero_basic_test, 1);
  return (launch_test(&testlist));
}
