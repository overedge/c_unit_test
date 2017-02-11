SRC_NAME = ./framework/load_test.c ./framework/launch_tests.c

NAME = framework/libft.a

OBJ_NAME = load_test.o launch_tests.o

all : $(NAME)

$(NAME) :
	@make fclean -C framework/libft/ && make -C framework/libft/
	@cp framework/libft/libft.a framework/
	@gcc -c -Wall -Werror -Wextra $(SRC_NAME) -I ./framework/includes/
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@mv framework/libft.a libunit.a
	@echo "\033[1;34m --UNIT-TEST-- :\033[m \033[1;32m DONE !\033[m"

debug :
	@make fclean -C framework/libft/ && make -C framework/libft/
	@cp framework/libft/libft.a framework/
	@gcc -c $(SRC_NAME) -I ./framework/includes/
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)
	@mv framework/libft.a libunit.a
	@echo "\033[1;34m DEBUG !! --UNIT-TEST-- :\033[m \033[1;32m DONE !\033[m"

clean :
	@rm -rf $(OBJ_NAME)
	@rm -rf framework/libft.a
	@make clean -C framework/libft/
	@echo "\033[1;34m --UNIT-TEST-- :\033[m \033[1;32m DELETE OBJ FILES !\033[m"

fclean : clean
	@rm -rf $(NAME)
	@make fclean -C framework/libft/
	@rm -rf libunit.a
	@rm -rf libft_malloc.so
	@echo "\033[1;34m -UNIT-TEST-- :\033[m \033[1;32m DELETE project !\033[m"

re : fclean all


test: all
	@gcc tests/main.c -L. lunit

.PHONY : all re clean fclean test
