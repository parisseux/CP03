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


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    hit_point = 100;
    e_point = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " is ready to attack." << std::endl;
    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " died." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
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


void ScavTrap::takeDamage(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std::cout << "ScavTrap " << name << "has already been destroyed.\n" << std::endl;
        return ;
    }
    
    hit_point -= amount;
    std::cout << "ScavTrap " << name << " has been attacked. He lost " << amount << " hit points." << std::endl; 
    
    if (hit_point <= 0)
    {
        std::cout << "ScavTrap " << name << " has been destroyed.\n" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std::cout << "ScavTrap " << name << "has already been destroyed.\n" << std::endl;
        return ;
    }
    if (e_point <= 0)
    {
        std::cout << "ScavTrap " << name << "can not repair itself because he has no energy point left.\n" <<std::endl;
        return ;
    } 
    
    e_point -=1;
    hit_point += amount;
    std::cout << "ScavTrap " << name << " has regain " << amount << " hit points." << std::endl;
    std::cout << "ScavTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode.\n" << std::endl;
}