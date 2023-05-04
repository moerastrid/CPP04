/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 16:24:49 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:03:49 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCatMessage(std::string message) {
	std::cout << "\033[1;36m" << "WrongCat - " << message << "\033[0m" << std::endl;
}

WrongCat::WrongCat() {
	this->type = "Wrongcat";
	WrongCatMessage("default constructor");
}

WrongCat::~WrongCat() {
	WrongCatMessage("default destructor");
}

WrongCat::WrongCat(WrongCat const &src) {
	WrongCatMessage("copy constructor");
	*this = src;
	this->type = "Wrongcat";
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	(void)src;
	WrongCatMessage("'=' sign operator'");
	this->type = "Wrongcat";
	return (*this);
}

void	WrongCat::makeSound(void) {
	WrongCatMessage("WRONG MIAUW");
}
