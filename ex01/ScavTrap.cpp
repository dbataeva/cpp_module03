#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "default ScavTrap constructor is called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " is destroying now..." << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap " << this->name << " attacs " << target << ", causing ";
	std::cout << this->attack_damage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 50) {
	std::cout << "ScavTrap " << name << " was created now" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}

const ScavTrap& ScavTrap::operator=(const ScavTrap &to_assignation) {
	if (this != &to_assignation) {
		this->ClapTrap::operator=(to_assignation);
	}
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return (*this);
}
	
ScavTrap::ScavTrap(const ScavTrap &old) {
	*this = old;
}