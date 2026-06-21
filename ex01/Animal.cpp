/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:52 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/20 13:23:57 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal default constructor called\n";
	type = "Animal";
}

Animal::Animal(const std::string &type)
{
	std::cout << "Animal type constructor called\n";
	this->type = type;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called\n";
	*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

const std::string	&Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic animal sound!\n";
}
