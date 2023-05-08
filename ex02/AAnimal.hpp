/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAAnimal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 13:42:39 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 16:55:07 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
	protected :
		AAnimal();								// default constructor
		std::string _type;

	public :
		virtual ~AAnimal();						// default destructor
		AAnimal(const AAnimal &src);			// copy constructor
		AAnimal	&operator=(const AAnimal &src);	// '=' sign operator

		virtual void		makeSound(void) const = 0;	// pure virtual function
		std::string			getType(void) const;
		virtual void	fillBrain(std::string idea) = 0;	// fills brain with idea
		virtual void	setIdea(std::string idea) = 0;		// set one idea
		virtual void	getIdeas() = 0;						// prints all
};

#endif