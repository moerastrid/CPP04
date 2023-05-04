/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 14:41:51 by ageels        #+#    #+#                 */
/*   Updated: 2023/05/04 15:13:37 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void	BrainMessage(std::string message) {
	std::cout << "\033[1;37m" << "Brain - " << message << "\033[0m" << std::endl;
}

Brain::Brain() {
	BrainMessage("default constructor");
}

Brain::~Brain() {
	BrainMessage("default destructor");
}

Brain::Brain(const Brain &src) {
	BrainMessage("copy constructor");
	*this = src;
}

Brain	&Brain::operator=(const Brain &src)
{
	BrainMessage("'=' sign operator");
	for (int i(0); i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}
