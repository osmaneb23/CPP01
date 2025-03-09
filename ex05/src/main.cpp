/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:00:00 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/09 18:25:21 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

int main(void)
{
    std::cout << BOLD_CYAN << "===== Welcome to the Harl 2.0 Program =====" << RESET << std::endl << std::endl;
    
    Harl harl;
    
    std::cout << BOLD_WHITE << "Testing Harl's complaints at different levels:" << RESET << std::endl << std::endl;
    
    std::cout << LIGHT_BLUE << "1. DEBUG level complaint:" << RESET << std::endl;
    harl.complain("DEBUG");
    
    std::cout << GREEN << "2. INFO level complaint:" << RESET << std::endl;
    harl.complain("INFO");
    
    std::cout << YELLOW << "3. WARNING level complaint:" << RESET << std::endl;
    harl.complain("WARNING");
    
    std::cout << RED << "4. ERROR level complaint:" << RESET << std::endl;
    harl.complain("ERROR");
    
    std::cout << PURPLE << "5. Invalid level complaint:" << RESET << std::endl;
    harl.complain("INVALID");
    
    std::cout << BOLD_CYAN << "===== End of Harl 2.0 Program =====" << RESET << std::endl;
    
    return (0);
}
