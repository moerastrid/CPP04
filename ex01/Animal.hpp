/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 13:42:39 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 13:56:45 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected :
		std::string _type;

	public :
		Animal();								// default constructor
		virtual ~Animal();						// default destructor
		Animal(const Animal &src);				// copy constructor

		Animal	&operator=(const Animal &src);	// '=' sign operator

		virtual void		makeSound(void) const;
		std::string			getType(void) const;
};

#endif