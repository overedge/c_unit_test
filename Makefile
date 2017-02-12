# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 14:44:59 by nahmed-m          #+#    #+#              #
#    Updated: 2017/02/12 15:14:12 by nahmed-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
	@make -C real-tests/
	-@./real-tests/real_tests
	@make -C tests/
	-@./tests/basic_run

test_clean: clean
	@make clean -C real-tests/
	@make clean -C tests/

test_fclean: fclean
	@make fclean -C real-tests/
	@make fclean -C tests/

.PHONY : all re clean fclean test
