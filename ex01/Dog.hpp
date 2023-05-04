/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:17:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:29:14 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();								// default constructor
		virtual ~Dog();						// default destructor
		Dog(const Dog &src);				// copy constructor

		Dog	&operator=(const Dog &src);		// '=' sign operator

		virtual void		makeSound(void) const;
};

#endif