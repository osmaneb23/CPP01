/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:00:00 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/09 18:32:39 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
    std::cout << LIGHT_BLUE << "[ DEBUG ]" << RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl << std::endl;
}

void Harl::info(void)
{
    std::cout << GREEN << "[ INFO ]" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "[ ERROR ]" << RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

Level Harl::getLevelEnum(std::string level)
{
    std::string levels[4] = {
        "DEBUG",
        "INFO", 
        "WARNING", 
        "ERROR"
    };
    
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            return static_cast<Level>(i);
    }
    
    return INVALID;
}

void Harl::complain(std::string level)
{
    void (Harl::*complaints[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    std::string levels[4] = {
        "DEBUG",
        "INFO", 
        "WARNING", 
        "ERROR"
    };
    
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*complaints[i])();
            return;
        }
    }
    
    std::cout << PURPLE << "[ Unknown level: " << level << " ]" << RESET << std::endl;
    std::cout << "Harl doesn't know how to complain at this level!" << std::endl << std::endl;
}

void Harl::filterComplain(std::string level)
{
    Level levelEnum = getLevelEnum(level);
    
    switch (levelEnum)
    {
        case DEBUG:
            debug();
            /* fall through */ // Explicitly indicate fall through
        case INFO:
            info();
            /* fall through */ // Explicitly indicate fall through
        case WARNING:
            warning();
            /* fall through */ // Explicitly indicate fall through
        case ERROR:
            error();
            break;
        default:
            std::cout << PURPLE << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
            std::cout << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off." << std::endl << std::endl;
    }
}
