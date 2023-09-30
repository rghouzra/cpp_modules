#include "ScavTrap.hpp"


int main()
{
    ScavTrap a("reda");

    a.guardGate();
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
	a.attack("Foo");
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
	a.takeDamage(10);
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
	a.attack("Bar");
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
	a.beRepaired(1);
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
	a.attack("Bar");
	std::cout << a.GetEnergyPoints() << " " <<a.GetHitPoints() << "\n";
}
