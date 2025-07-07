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


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
    diamondtrap.attack("un petit chat");
    diamondtrap.whoAmI();
    
    return (0);
}