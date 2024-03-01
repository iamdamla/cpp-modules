# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: derblang <derblang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 11:22:21 by derblang          #+#    #+#              #
#    Updated: 2024/02/21 14:46:53 by derblang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = stack

SRCS = main.cpp 

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -ggdb3

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
			@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re  