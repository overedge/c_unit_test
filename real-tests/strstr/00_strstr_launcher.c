#include "../includes/real_tests.h"

int strstr_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("STRSTR :\n");
  load_test(&testlist, "Basic test", &strstr_basic_test, 1);
  load_test(&testlist, "No Match test", &strstr_nomatch_test, 1);
  return (launch_tests(&testlist));
}
