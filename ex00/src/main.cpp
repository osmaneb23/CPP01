/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 03:48:18 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/06 19:03:58 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	std::cout << "Enter a name for the Zombie: ";
	std::string name;
	std::cin >> name;
	Zombie zombie(name);
	zombie.announce();
	return (0);
}