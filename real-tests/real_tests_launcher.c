#include "includes/real_tests.h"

int	main(void)
{
  ft_printf("*********************************************\n");
  ft_printf("***************42 TEST FOR RUSH**************\n");
  ft_printf("*********************************************\n");
  if (MEMSET)
    memset_launcher();
  if (BZERO)
    bzero_launcher();
  if (ATOI)
    atoi_launcher();
  return (0);
}
