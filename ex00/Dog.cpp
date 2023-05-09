/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 16:24:49 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/09 14:51:31 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	DogMessage(std::string message) {
	std::cout << "\033[1;34m" << "Dog - " << message << "\033[0m" << std::endl;
}

Dog::Dog() : Animal() {
	_type = "dog";
	DogMessage("default constructor");
}

Dog::~Dog() {
	DogMessage("default destructor");
}

Dog::Dog(Dog const &src) {
	DogMessage("copy constructor");
	*this = src;
}

Dog	&Dog::operator=(Dog const &src)
{
	(void)src;
	DogMessage("'=' sign operator'");
	_type = "Dog";
	return (*this);
}

void	Dog::makeSound(void) const {
	DogMessage("WOEF");
}
