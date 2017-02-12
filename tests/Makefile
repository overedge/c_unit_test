# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 14:44:55 by nahmed-m          #+#    #+#              #
#    Updated: 2017/02/12 15:54:17 by nahmed-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = ./main.c ./basic/00_launcher.c ./basic/01_basic_test.c \
		   ./basic/02_null_test.c ./basic/03_no_acsii.c ./basic/04_abort.c

OBJ_NAME  = ./main.o 00_launcher.o 01_basic_test.o 02_null_test.o \
			03_no_acsii.o 04_abort.o
		

NAME = basic_run

all : $(NAME)

$(NAME) :
	@clang -c -Wall -Werror -Wextra $(SRC_NAME) -I ./includes/
	@clang -o $(NAME) -Wall -Werror -Wextra $(OBJ_NAME) -L.. -lunit
	@echo "\033[1;34m --REAL-FAKE-TEST-- :\033[m \033[1;32m DONE !\033[m"

clean :
	@rm -rf $(OBJ_NAME)
	@echo "\033[1;34m --REAL-FAKE-TEST-- :\033[m \033[1;32m DELETE OBJ FILES !\033[m"

fclean : clean
	@rm -rf $(NAME)
	@echo "\033[1;34m -UNIT-TEST-- :\033[m \033[1;32m DELETE project !\033[m"

re : fclean all


test: all
	@./basic_run

.PHONY : all re clean fclean test
