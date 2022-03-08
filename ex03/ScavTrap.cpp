#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "default ScavTrap constructor is called" << std::endl;
	this->energy = 50;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->name << " is destroying now..." << std::endl;
}

void ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap " << this->name << " attacs " << target << ", causing ";
	std::cout << this->attack_damage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap() {
	this->name = name;
	this->hitpoints = 100;
	this->energy = 50;
	this->attack_damage = 20;
	
	std::cout << "ScavTrap " << name << " with " << this->hitpoints << " hitpoints, ";
	std::cout << this->energy << " energy points and " << this->attack_damage;
	std::cout << " attack damage was creating now" << std::endl;
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