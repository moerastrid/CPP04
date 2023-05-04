/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 13:36:51 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 14:39:03 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main(void)
{
	Dog *a = new Dog();
    Animal *b = new Dog(*a);
    b->makeSound();
	a->makeSound();
	delete a;
	delete b;
	Animal	* betsy = new Cat();;
	Cat clair;
	Cat dave(clair);
	Animal	craig;
	Animal	denise = craig;
	
	betsy->makeSound();
	clair.makeSound();
	dave.makeSound();
	craig.makeSound();
	denise.makeSound();
	std::cout << "betsy type: " << betsy->getType() << " " << std::endl;
	std::cout << "clair type: " << clair.getType() << " " << std::endl;
	std::cout << "dave type: " << dave.getType() << " " << std::endl;
	std::cout << "craig type: " << craig.getType() << " " << std::endl;
	std::cout << "denise type: " << denise.getType() << " " << std::endl;


	WrongAnimal	* edgar = new WrongCat();;
	WrongAnimal	francis;
	WrongAnimal	greg(francis);
	
	edgar->makeSound();
	francis.makeSound();
	greg.makeSound();
	std::cout << "edgar type: " << edgar->getType() << " " << std::endl;
	std::cout << "francis type: " << francis.getType() << " " << std::endl;
	std::cout << "greg type: " << greg.getType() << " " << std::endl;

	Dog	Snoopy;
	Animal *Melissa = new Dog(Snoopy);

	Snoopy.makeSound();
	Melissa->makeSound();
	std::cout << "Snoopy type: " << Snoopy.getType() << " " << std::endl;
	std::cout << "Melissa type: " << Melissa->getType() << " " << std::endl;
	delete Melissa;

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	delete betsy;
	delete edgar;
	delete meta;
	delete i;
	delete j;
	return (0);
}
