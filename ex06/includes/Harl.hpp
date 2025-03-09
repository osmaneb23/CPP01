/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:00:00 by obouayed          #+#    #+#             */
/*   Updated: 2025/03/09 18:30:28 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include "Colors.hpp"

enum Level {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    INVALID
};

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(void);
    ~Harl(void);
    
    void complain(std::string level);
    void filterComplain(std::string level);
    Level getLevelEnum(std::string level);
};

#endif
