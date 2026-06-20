/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:45 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/20 13:49:15 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat default constructor called\n";
	type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau miau!\n";
}
