/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:48:18 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/07 01:24:55 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	int n;
	std::cout << "Enter the number of Zombies you want to create: ";
	if (!(std::cin >> n) || n <= 0 || n > 1000)
	{
		std::cerr << "Invalid input. Please enter a number between 1 and 1000." << std::endl;
		return (1);
	}
	std::string name;
	std::cout << "Enter a name for the Zombies: ";
	std::cin >> name;
	Zombie *zombies = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}