#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "default FragTrap constructor is called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " is destroying now..." << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100) {
	std::cout << "FragTrap " << name << " with " << this->hitpoints << " hitpoints, ";
	std::cout << this->energy << " energy points and " << this->attack_damage;
	std::cout << " attack damage was creating now" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " says: 'High fives!'" << std::endl;
}

const FragTrap& FragTrap::operator=(const FragTrap &to_assignation) {
	if (this != &to_assignation) {
		this->ClapTrap::operator=(to_assignation);
	}
	std::cout << "FragTrap assignation operator called" << std::endl;
	return (*this);
}
	
FragTrap::FragTrap(const FragTrap &old) {
	*this = old;
}