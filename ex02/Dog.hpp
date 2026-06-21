/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:50 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/21 19:44:06 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		virtual	~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
