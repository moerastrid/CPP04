# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/05/02 13:37:44 by ageels        #+#    #+#                  #
#    Updated: 2023/05/09 11:46:12 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

FLAGS = -I. -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

HDR =   Animal.hpp\
        Cat.hpp\
        Dog.hpp\
        WrongAnimal.hpp\
        WrongCat.hpp

SRC = main.cpp\
	Animal.cpp\
	Cat.cpp\
	Dog.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJ) $(HDR)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -fr $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re