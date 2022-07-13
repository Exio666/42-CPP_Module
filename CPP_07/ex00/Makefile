# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 10:16:47 by bsavinel          #+#    #+#              #
#    Updated: 2022/07/13 10:18:55 by bsavinel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp	\

OBJS	= 	$(SRCS:.cpp=.o)
DEPS	=	$(SRCS:.cpp=.d)

NAME = whatever

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

CC = c++

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

-include $(DEPS)

.PHONY: all clean fclean re