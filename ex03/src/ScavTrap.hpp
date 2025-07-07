/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:51:06 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 13:38:58 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate();  
};

#endif