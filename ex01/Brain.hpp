/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 14:50:59 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/08 14:22:58 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	protected :
	std::string	_ideas[100];

	public :
		Brain();								// default constructor
		virtual ~Brain();						// default destructor
		Brain(const Brain &src);				// copy constructor
		Brain	&operator=(const Brain &src);	// '=' sign operator

		void	setIdea(std::string idea);
		const std::string	getIdea(int i);
};

#endif