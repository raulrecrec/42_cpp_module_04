/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 19:05:19 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/21 20:02:52 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain(void);
};

#endif
