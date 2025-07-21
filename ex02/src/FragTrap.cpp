
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(name)
{
    name = "unknown";
    hit_point = 100;
    e_point = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " is ready to attack." << std::endl;
    std::cout << "FragTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit_point = 100;
    e_point = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " is ready to attack." << std::endl;
    std::cout << "FragTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << "Flag Trap " << name << " died." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Flag Trap " << name << " shouts: HIGH FIVE!!\n" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hit_point <= 0)
    {
        std::cout << "FragTrap " << name << " has been destroyed since he lost all of his hit point.\n" << std::endl;
        return ;
    }
    
    if (e_point <= 0)
    {
        std::cout << "FragTrap " << name << " can not attack because he has no energy point left.\n" <<std::endl;
        return ;
    }
        
    e_point -= 1;
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    std::cout << "FragTrap " << name << " has " << hit_point << " hit points and "<< e_point << " energy points.\n" << std::endl;
}