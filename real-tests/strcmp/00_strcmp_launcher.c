#include "../includes/real_tests.h"

int strcmp_launcher(void)
{
  t_unit_test *testlist;

  testlist = NULL;
  ft_printf("STRCMP :\n");
  load_test(&testlist, "Basic test", &strcmp_basic_test, 1);
  load_test(&testlist, "Lenght test", &strcmp_lenght_test, 1);
  load_test(&testlist, "Harder test", &strcmp_harder_test, 1);
  load_test(&testlist, "Null test", &strcmp_null_test, 1);
  return (launch_test(&testlist));
}
