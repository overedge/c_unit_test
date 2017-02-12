#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include "../../framework/includes/libunit.h"

# define ACTIVATE 1
# define NO_ACTIVITE 0

/*
**	SET DEFINE VALUE TO 0/1 TO DISABLE/ENABLE TEST LAUNCHER
*/

# define MEMSET 1
# define BZERO 1
# define ATOI 1
# define STRCMP 1
# define STRDUP 1
# define STRSTR 1
# define STRCHR 1

/*
**	LAUNCHER DECLARATION'S
*/

int	memset_launcher(void);
int	bzero_launcher(void);
int	atoi_launcher(void);
int	strcmp_launcher(void);
int	strdup_launcher(void);
int	strstr_launcher(void);
int	strchr_launcher(void);

/*
**	UNIT TEST DECLARATIONS'
*/

int	memset_basic_test(void);
int	bzero_basic_test(void);
int	atoi_basic_test(void);
int	atoi_negative_test(void);
int	atoi_alpha_test(void);
int	atoi_overflow_test(void);
int	atoi_null_test(void);
int	strcmp_basic_test(void);
int	strcmp_lenght_test(void);
int	strcmp_harder_test(void);
int	strcmp_null_test(void);
int	strdup_basic_test(void);
int	strstr_basic_test(void);
int	strstr_nomatch_test(void);
int	strchr_basic_test(void);
int	strchr_multi_test(void);
int	strchr_nomatch_test(void);

#endif
