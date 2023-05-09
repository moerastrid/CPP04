/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:17:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/09 11:50:55 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();								// default constructor
		~WrongCat();								// default destructor
		WrongCat(WrongCat const &src);				// copy constructor

		WrongCat	&operator=(WrongCat const &src);	// '=' sign operator

		void		makeSound(void) const;
};

#endif