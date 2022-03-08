#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap first("Cat");
	FragTrap second("Dog");

	first.attack("Dog");
	second.takeDamage(30);
	second.beRepaired(1);
	first.highFivesGuys();
	return (0);
}