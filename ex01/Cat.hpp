/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:17:05 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 14:29:35 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private : 
		Brain *_brain;

	public :
		Cat();								// default constructor
		virtual ~Cat();						// default destructor
		Cat(const Cat &src);				// copy constructor
		Cat	&operator=(const Cat &src);		// '=' sign operator

		virtual void		makeSound(void) const;

		void	fillBrain(std::string idea);		// fills brain with idea
		void	setIdea(std::string idea);			// set one idea
		void	getIdeas();							// prints all
};

#endif