/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 13:42:39 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/02 16:46:08 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	protected :
		std::string type;

	public :
		WrongAnimal();								// default constructor
		~WrongAnimal();								// default destructor
		WrongAnimal(const WrongAnimal &src);				// copy constructor

		WrongAnimal	&operator=(const WrongAnimal &src);	// '=' sign operator

		void		makeSound(void);
		std::string	getType(void);
};

#endif