/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:23 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/02 13:47:53 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Pupuce");
    claptrap.attack("Loustique");
    claptrap.beRepaired(20);
    claptrap.takeDamage(12);
    claptrap.beRepaired(10);
    claptrap.beRepaired(8);
    claptrap.takeDamage(40);
    claptrap.takeDamage(5);
    return (0);
}