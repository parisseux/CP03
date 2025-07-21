/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:02:22 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 14:21:28 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name)
    : ClapTrap(_name + "_clap_name"), 
    ScavTrap(_name),
    FragTrap(_name),
    name(_name)
{
    hit_point = FragTrap::hit_point;
    e_point = ScavTrap::e_point;
    damage = FragTrap::damage;
    std::cout << "DiamondTrap " << name << " is ready to attack." << std::endl;
    std::cout << "DiamondTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name<< " is dead.\n" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My DiamondTrap name is " << name << " and my ClapTrap name is " << ClapTrap::name  << std::endl;
}
