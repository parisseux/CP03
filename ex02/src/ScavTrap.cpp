/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:51:14 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/08 14:20:45 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    name = "unknow";
    hit_point = 100;
    e_point = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " is ready to attack." << std::endl;
    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit_point = 100;
    e_point = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " is ready to attack." << std::endl;
    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) 
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " died." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
    if (this != &other) 
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_point <= 0)
    {
        std::cout << "ScavTrap " << name << " has been destroyed since he lost all of his hit point.\n" << std::endl;
        return ;
    }
    
    if (e_point <= 0)
    {
        std::cout << "ScavTrap " << name << " can not attack because he has no energy point left.\n" <<std::endl;
        return ;
    }
        
    e_point -= 1;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}


void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n" << std::endl;
}