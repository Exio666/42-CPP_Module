# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 15:48:39 by bsavinel          #+#    #+#              #
#    Updated: 2022/06/09 13:16:09 by bsavinel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp

OBJS	= 	$(SRCS:.cpp=.o)
DEPS	=	$(SRCS:.cpp=.d)

NAME = Serialisation

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

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re