#include "../includes/real_tests.h"

int memset_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("MEMSET :\n");
  load_test(&testlist, "Basic test", &memset_basic_test, 1);
  return (launch_tests(&testlist));
}
