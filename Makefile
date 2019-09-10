# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/16 19:27:39 by gpanyana          #+#    #+#              #
#    Updated: 2019/09/10 12:35:54 by gpanyana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

LIBFT = libft/libft.a

CHECKER = 

PUSH_SWAP =

CFLAGS = -Wall -Werror -Wextra 

SRC = *.c

OBJ = *.o

//LINKLIB = @gcc -I. -o

all: $(NAME)

$(NAME): 



//norm:
//	find . -type f -name "*.[c|h]" -exec norminette {} \;

clean:


fclean:


re: fclean all

.PHONY: 
