/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 14:40:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 14:27:30 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void) {
	int	size = 4;
	Animal *group[size];
	for (int i(0); i < size; i++) {
		if (i > size / 2) {
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
	
	for (int i(0); i < size; i++)
		delete group[i];
	return (0);
}
