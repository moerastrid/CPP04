/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 14:40:52 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:11:37 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	int	size = 4;
	Animal *group[size];
	for (int i(0); i < size; i++)
	{
		if (i > size / 2)
			group[i] = new Cat;
		else
			group[i] = new Dog;
	}
	for (int i(0); i < size; i++)
		delete group[i];
	return (0);
}
