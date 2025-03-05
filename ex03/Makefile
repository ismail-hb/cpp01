# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismail <ismail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 20:02:39 by ishouche          #+#    #+#              #
#    Updated: 2025/03/04 07:59:05 by ismail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEBUG	=	0

NAME	=	violence

INC_DIR	=	inc
OBJ_DIR	=	obj
# HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

SRC	=	$(addprefix $(SRC_DIR)/, HumanA.cpp main.cpp HumanB.cpp Weapon.cpp)

OBJ	=	$(SRC:%.cpp=$(OBJ_DIR)/%.o)

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCFLAGS	=	-I$(INC_DIR)

ifeq ($(DEBUG), 1)
	CXXFLAGS	+=	-g3 -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS) | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	@clear
	@./$(NAME)

.PHONY: all clean fclean re run
