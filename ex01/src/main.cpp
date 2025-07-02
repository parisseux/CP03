/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:23 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/02 14:27:01 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Pupuce");
    claptrap.attack("Loustique");
    claptrap.beRepaired(20);
    claptrap.takeDamage(12);
    
    ScavTrap scavtrap("Mimi");
    scavtrap.attack("Marjorie");
    scavtrap.guardGate();
    return (0);
}