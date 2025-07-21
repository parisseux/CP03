/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:18 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 11:22:32 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unknown"), hit_point(10), e_point(10), damage(10)
{
    std::cout << "ClapTrap " << name << " is ready to attack." << std::endl;
    std::cout << "ClapTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;   
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), e_point(10), damage(10)
{
    std::cout << "ClapTrap " << name << " is ready to attack." << std::endl;
    std::cout << "ClapTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    name = other.name;
    hit_point = other.hit_point;
    e_point = other.e_point;
    damage = other.damage;
    std::cout << "ClapTrap copy constructor called for " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hit_point = other.hit_point;
        e_point = other.e_point;
        damage = other.damage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " died." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << " has been destroyed since he lost all of his hit point.\n" << std::endl;
        return ;
    }
    
    if (e_point <= 0)
    {
        std::cout << "ClapTrap " << name << "can not attack because he has no energy point left.\n" <<std::endl;
        return ;
    }
        
    e_point -= 1;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << "has already been destroyed.\n" << std::endl;
        return ;
    }
    
    hit_point -= amount;
    std::cout << "ClapTrap " << name << " has been attacked. He lost " << amount << " hit points." << std::endl; 
    
    if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << " has been destroyed.\n" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_point <= 0)
    {
        std::cout << "ClapTrap " << name << "has already been destroyed.\n" << std::endl;
        return ;
    }
    if (e_point <= 0)
    {
        std::cout << "ClapTrap " << name << "can not repair itself because he has no energy point left.\n" <<std::endl;
        return ;
    } 
    
    e_point -=1;
    hit_point += amount;
    std::cout << "ClapTrap " << name << " has regain " << amount << " hit points." << std::endl;
    std::cout << "ClapTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}