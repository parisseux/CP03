/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:23 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 13:59:31 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

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
    return (0);
}