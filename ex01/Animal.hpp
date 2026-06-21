/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:54 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/21 19:43:29 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual	~Animal(void);

		const std::string	&getType(void) const;
		virtual void		makeSound(void) const;
};

#endif
