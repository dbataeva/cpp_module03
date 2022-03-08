#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap first("Cat");
	DiamondTrap second("Dog");

	first.attack("Dog");
	second.takeDamage(30);
	second.beRepaired(1);
	first.highFivesGuys();
	first.whoAmI();

	return (0);
}