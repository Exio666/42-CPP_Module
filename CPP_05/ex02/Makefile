# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 20:13:36 by bsavinel          #+#    #+#              #
#    Updated: 2022/05/31 19:20:57 by bsavinel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp					\
			Bureaucrat.cpp				\
			Form.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\


OBJS	= 	$(SRCS:.cpp=.o)
DEPS	=	$(SRCS:.cpp=.d)

NAME = Bureaucrat

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