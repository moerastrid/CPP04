/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 16:24:49 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/09 14:52:17 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	DogMessage(std::string message) {
	std::cout << "\033[1;34m" << "Dog - " << message << "\033[0m" << std::endl;
}

Dog::Dog() : AAnimal() {
	_type = "dog";
	try {
		_brain = new Brain();
	} catch(const std::bad_alloc& ba) {
		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
	}
	DogMessage("default constructor");
}

Dog::~Dog() {
	DogMessage("default destructor");
	delete _brain;
}

Dog::Dog(Dog const &src) {
	DogMessage("copy constructor");
	*this = src;
}

Dog	&Dog::operator=(Dog const &src)
{
	DogMessage("'=' sign operator'");
	*_brain = *(src._brain);
	_type = "dog";
	return (*this);
}

void	Dog::makeSound(void) const {
	DogMessage("WOEF");
}

void	Dog::fillBrain(std::string idea) {
	for (int i(0); i < 100; i++)
		_brain->setIdea(idea);
}

void	Dog::setIdea(std::string idea) {
	_brain->setIdea(idea);
}

void	Dog::getIdeas(void) {
	std::string idea;
	for (int i(0); i < 100; i++) {
		idea = _brain->getIdea(i);
		if (idea.empty() == false)
			DogMessage(_brain->getIdea(i));
	}
}
