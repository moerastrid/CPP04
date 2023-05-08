/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:02:09 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 16:53:25 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

void	AAnimalMessage(std::string message) {
	std::cout << "\033[1;32m" << "AAnimal - " << message << "\033[0m" << std::endl;
}

AAnimal::AAnimal() : _type("AAnimal") {
	AAnimalMessage("default constructor");
}

AAnimal::~AAnimal() {
	AAnimalMessage("default destructor");
}

AAnimal::AAnimal(AAnimal const &src) {
	AAnimalMessage("copy constructor");
	*this = src;
}

AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	AAnimalMessage("'=' sign operator'");
	_type = src._type;
	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (_type);
}