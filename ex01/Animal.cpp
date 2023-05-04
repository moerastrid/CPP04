/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:02:09 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:03:55 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	AnimalMessage(std::string message) {
	std::cout << "\033[1;32m" << "Animal - " << message << "\033[0m" << std::endl;
}

Animal::Animal() : _type("animal") {
	AnimalMessage("default constructor");
}

Animal::~Animal() {
	AnimalMessage("default destructor");
}

Animal::Animal(Animal const &src) {
	AnimalMessage("copy constructor");
	*this = src;
}

Animal	&Animal::operator=(Animal const &src)
{
	AnimalMessage("'=' sign operator'");
	_type = src._type;
	return (*this);
}

void	Animal::makeSound(void) const {
	AnimalMessage("~ animal noises ~");
}

std::string	Animal::getType(void) const {
	return (_type);
}