#include "ClapTrap.hpp"

int main(void) {
	ClapTrap first("Cat");
	ClapTrap second("Dog");

	first.attack("Dog");
	second.takeDamage(0);
	second.beRepaired(1);
	return (0);
}