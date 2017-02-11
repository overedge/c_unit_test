#include "../includes/real_tests.h"

int atoi_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("ATOI :\n");
  load_test(&testlist, "Basic test", &atoi_basic_test, 1);
  load_test(&testlist, "Negative test", &atoi_negative_test, 1);
  load_test(&testlist, "Alpha test", &atoi_alpha_test, 1);
  load_test(&testlist, "Overflow test", &atoi_overflow_test, 1);
  load_test(&testlist, "Null test", &atoi_null_test, 0);
  return (launch_tests(&testlist));
}
