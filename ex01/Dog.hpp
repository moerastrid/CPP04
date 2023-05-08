/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:17:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 14:30:07 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private : 
		Brain *_brain;

	public :
		Dog();								// default constructor
		virtual ~Dog();						// default destructor
		Dog(const Dog &src);				// copy constructor
		Dog	&operator=(const Dog &src);		// '=' sign operator

		virtual void		makeSound(void) const;

		void	fillBrain(std::string idea);		// fills brain with idea
		void	setIdea(std::string idea);			// set one idea
		void	getIdeas();							// prints all
};

#endif