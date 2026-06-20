/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 12:51:56 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/20 13:57:37 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();

	std::cout << j->getType() << "\n";
	std::cout << i->getType() << "\n";

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "----- Wrong animal test -----\n";

	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();

	std::cout << wrong_meta->getType() << "\n";
	std::cout << wrong_cat->getType() << "\n";

	wrong_meta->makeSound();
	wrong_cat->makeSound();

	delete wrong_meta;
	delete wrong_cat;

	return (0);
}
