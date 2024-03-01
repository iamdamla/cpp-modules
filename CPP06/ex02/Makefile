# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: derblang <derblang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 14:18:19 by derblang          #+#    #+#              #
#    Updated: 2024/02/14 12:15:51 by derblang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRCS = main.cpp Base.cpp 

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