/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:00:00 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/09 18:30:28 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << BOLD_RED << "Error: " << RESET << "Wrong number of arguments!" << std::endl;
        std::cout << BOLD_WHITE << "Usage: " << RESET << argv[0] << " <log_level>" << std::endl;
        std::cout << "Log levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return 1;
    }
    
    std::cout << BOLD_CYAN << "===== Harl Filter Program =====" << RESET << std::endl << std::endl;
    
    Harl harl;
    harl.filterComplain(argv[1]);
    
    std::cout << BOLD_CYAN << "===== End of Program =====" << RESET << std::endl;
    
    return 0;
}
