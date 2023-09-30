#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap& obj);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& obj);
    void guardGate();
private:

};
#endif /*ScavTrap_HPP*/
