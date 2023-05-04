/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 16:24:49 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:04:02 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	CatMessage(std::string message) {
	std::cout << "\033[1;33m" << "Cat - " << message << "\033[0m" << std::endl;
}

Cat::Cat() : Animal() {
	_type = "cat";
	CatMessage("default constructor");
}

Cat::~Cat() {
	CatMessage("default destructor");
}

Cat::Cat(Cat const &src) {
	CatMessage("copy constructor");
	*this = src;
	//_type = "cat";
}

Cat	&Cat::operator=(Cat const &src)
{
	(void)src;
	CatMessage("'=' sign operator'");
	//_type = "cat";
	return (*this);
}

void	Cat::makeSound(void) const {
	CatMessage("MIAUW");
}
