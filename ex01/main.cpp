/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:56 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/21 20:31:19 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << "----- Basic delete test -----" << std::endl;
	delete j;
	delete i;

	std::cout << "----- Animal array test -----" << std::endl;

	Animal	*animals[10];
	int		index;

	index = 0;
	while (index < 10)
	{
		if (index < 5)
			animals[index] = new Dog();
		else
			animals[index] = new Cat();
		index++;
	}

	index = 0;
	while (index < 10)
	{
		animals[index]->makeSound();
		index++;
	}

	index = 0;
	while (index < 10)
	{
		delete animals[index];
		index++;
	}

	std::cout << "----- Deep copy test -----" << std::endl;

	Dog	dog;
	Dog	dog_copy(dog);
	Dog	dog_assigned;

	dog_assigned = dog;

	Cat	cat;
	Cat	cat_copy(cat);
	Cat	cat_assigned;

	cat_assigned = cat;

	dog.makeSound();
	dog_copy.makeSound();
	dog_assigned.makeSound();

	cat.makeSound();
	cat_copy.makeSound();
	cat_assigned.makeSound();

	return (0);
}
