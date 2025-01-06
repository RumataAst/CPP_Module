# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akretov <akretov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 16:15:06 by akretov           #+#    #+#              #
#    Updated: 2025/01/06 15:54:09 by akretov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook
SRCS    := $(shell find . -maxdepth 1 -type f -name "*.cpp")
OBJS    := $(SRCS:.cpp=.o)

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
