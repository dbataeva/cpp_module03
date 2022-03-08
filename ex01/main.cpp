#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap first("Cat");
	ScavTrap second("Dog");

	first.attack("Dog");
	second.takeDamage(20);
	second.beRepaired(1);
	first.guardGate();

	return (0);
}