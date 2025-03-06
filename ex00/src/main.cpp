/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:48:18 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/06 22:23:49 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	std::string name;
	std::cout << "Enter a name for the Zombie (on the heap): ";
	std::cin >> name;
	Zombie *zombie = newZombie(name);
	zombie->announce();
	std::cout << "Enter a name for the Zombie (on the stack): ";
	std::cin >> name;
	randomChump(name);
	delete zombie;
	return (0);
}