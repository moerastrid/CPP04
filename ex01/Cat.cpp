/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 16:24:49 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/09 14:51:46 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	CatMessage(std::string message) {
	std::cout << "\033[1;33m" << "Cat - " << message << "\033[0m" << std::endl;
}

Cat::Cat() : Animal() {
	_type = "cat";
	try {
		_brain = new Brain();
	} catch(const std::bad_alloc& ba) {
		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
	}
	CatMessage("default constructor");
}

Cat::~Cat() {
	CatMessage("default destructor");
	delete _brain;
}

Cat::Cat(Cat const &src) {
	CatMessage("copy constructor");
	*this = src;
}

Cat	&Cat::operator=(Cat const &src)
{
	CatMessage("'=' sign operator'");
	_type = "cat";
	*_brain = *(src._brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	CatMessage("MIAUW");
}

void	Cat::fillBrain(std::string idea) {
	for (int i(0); i < 100; i++)
		_brain->setIdea(idea);
}

void	Cat::setIdea(std::string idea) {
	_brain->setIdea(idea);
}

void	Cat::getIdeas(void) {
	std::string idea;
	for (int i(0); i < 100; i++) {
		idea = _brain->getIdea(i);
		if (idea.empty() == false)
			CatMessage(_brain->getIdea(i));
	}
}
