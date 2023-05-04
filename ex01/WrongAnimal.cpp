/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:02:09 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:04:19 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimalMessage(std::string message) {
	std::cout << "\033[1;35m" << "WrongAnimal - " << message << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal() {
	WrongAnimalMessage("default constructor");
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	WrongAnimalMessage("default destructor");
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	WrongAnimalMessage("copy constructor");
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	WrongAnimalMessage("'=' sign operator'");
	this->type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) {
	WrongAnimalMessage("~ wrong animal noises ~");
}

std::string	WrongAnimal::getType(void) {
	return (this->type);
}