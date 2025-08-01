/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:03:32 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 14:12:05 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verifier encore quelques trucs genre copy de diamonds

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main()
{
    ClapTrap claptrap("Pupuce");
    claptrap.attack("Loustique");
    claptrap.beRepaired(20);
    claptrap.takeDamage(12);
    ClapTrap copy(claptrap);
    
    ScavTrap scavtrap("Mimi");
    scavtrap.attack("Marjorie");
    scavtrap.beRepaired(3);
    scavtrap.guardGate();

    FragTrap flag("Kitty");
    flag.attack("Doggy");
    flag.takeDamage(10);
    flag.beRepaired(5);
    flag.highFivesGuys();

    DiamondTrap diamondtrap("Precieuse");
    DiamondTrap diamond2(diamondtrap);
    DiamondTrap diamond3("bella");
    diamond3 = diamondtrap;
    diamondtrap.attack("un petit chat");
    diamondtrap.whoAmI();
    
    return (0);
}