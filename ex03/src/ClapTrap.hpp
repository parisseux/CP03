/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:20 by pchatagn          #+#    #+#             */
/*   Updated: 2025/07/07 14:19:08 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
    std::string name;
    int hit_point;
    int e_point;
    int damage;
public:
    ClapTrap(std::string _name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif