/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 14:40:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 18:02:13 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {
	int	size = 6;
	AAnimal *group[size];
	for (int i(0); i < size; i++) {
		if (i >= size / 2) {
			try {
				group[i] = new Cat;
			} catch(const std::bad_alloc& ba) {
				std::cerr << "bad_alloc caught: " << ba.what() << '\n';
			}
		}
		else
			group[i] = new Dog;
	}
	Cat Brian;
	Cat Greg;

	Brian.setIdea("fish");
	Greg = Brian;
	Greg.setIdea("clouds");
	Brian.fillBrain("sleep");
	Greg.getIdeas();
	//Brian.getIdeas();
	Brian.makeSound();

	for (int i(0); i < size; i++) {
		group[i]->setIdea("scratch");
		group[i]->setIdea("I'd like some water");
		if (group[i]->getType().compare("dog") == 0)
			group[i]->setIdea("How nice to be a dog");
	}
	for (int i(0); i < size; i++) {
		group[i]->getIdeas();
	}
	
	for (int i(0); i < size; i++)
		delete group[i];
	return (0);
}
