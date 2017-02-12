#include "../includes/real_tests.h"

int strchr_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("STRCHR :\n");
  load_test(&testlist, "Basic test", &strchr_basic_test, 1);
  load_test(&testlist, "Multimatch test", &strchr_multi_test, 1);
  load_test(&testlist, "No Match test", &strchr_nomatch_test, 1);
  return (launch_tests(&testlist));
}
