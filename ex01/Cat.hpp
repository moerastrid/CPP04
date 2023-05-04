/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:17:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 13:45:09 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define	CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();								// default constructor
		virtual ~Cat();						// default destructor
		Cat(const Cat &src);				// copy constructor

		Cat	&operator=(const Cat &src);	// '=' sign operator

		virtual void		makeSound(void) const;
};

#endif