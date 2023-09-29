#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        
    }
    return (*this);
}
