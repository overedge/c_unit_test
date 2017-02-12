SRC_NAME = ./main.c ./atoi/00_atoi_launcher.c \
		   ./atoi/01_atoi_basic_test.c ./atoi/02_atoi_negative_test.c \
		   ./atoi/03_atoi_alpha_test.c ./atoi/04_atoi_overflow_test.c \
		   ./atoi/05_atoi_null_test.c ./bzero/00_bzero_launcher.c \
		   ./bzero/01_bzero_basic_test.c ./memset/00_memset_launcher.c \
		   ./memset/01_memset_basic_test.c ./strcmp/00_strcmp_launcher.c \
		   ./strcmp/01_strcmp_basic_test.c ./strcmp/02_strcmp_lenght_test.c \
		   ./strcmp/03_strcmp_harder_test.c ./strcmp/04_strcmp_null_test.c

OBJ_NAME  = ./main.o 00_atoi_launcher.o \
		   01_atoi_basic_test.o 02_atoi_negative_test.o \
		   03_atoi_alpha_test.o 04_atoi_overflow_test.o \
		   05_atoi_null_test.o 00_bzero_launcher.o \
		   01_bzero_basic_test.o 00_memset_launcher.o \
		   01_memset_basic_test.o 00_strcmp_launcher.o \
		   01_strcmp_basic_test.o 02_strcmp_lenght_test.o \
		   03_strcmp_harder_test.o 04_strcmp_null_test.o \
		

NAME = real_tests

all : $(NAME)

$(NAME) :
	@gcc -c -Wall -Werror -Wextra $(SRC_NAME) -I ./includes/
	@gcc -o $(NAME) -Wall -Werror -Wextra $(OBJ_NAME) -L.. -lunit
	@echo "\033[1;34m --REAL-TEST-- :\033[m \033[1;32m DONE !\033[m"

clean :
	@rm -rf $(OBJ_NAME)
	@echo "\033[1;34m --UNIT-TEST-- :\033[m \033[1;32m DELETE OBJ FILES !\033[m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[1;34m -UNIT-TEST-- :\033[m \033[1;32m DELETE project !\033[m"

re : fclean all


test: all
	@./real_tests

.PHONY : all re clean fclean test
