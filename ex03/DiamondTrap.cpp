#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name") {
	this->name = name;
	std::cout << "DiamondTrap " << name << " with " << this->hitpoints << " hitpoints, ";
	std::cout << this->energy << " energy_points and " << this->attack_damage;
	std::cout << " attack damage was created" << std::endl;
}
DiamondTrap::DiamondTrap() {
	std::cout << "default DiamondTrap constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " is destroying now..." << std::endl;
};

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << this->name << std::endl;
	std::cout << "My gradparent name is " << this->ClapTrap::name << std::endl;
}

const DiamondTrap& DiamondTrap::operator=(const DiamondTrap &to_assignation) {
	if (this != &to_assignation) {
		this->ClapTrap::operator=(to_assignation);
	}
	this->set_name(to_assignation.get_name());
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	return (*this);
}
	
DiamondTrap::DiamondTrap(const DiamondTrap &old) {
	*this = old;
}

void DiamondTrap::set_name(const std::string &name) {
	this->name = name;
}
		
const std::string DiamondTrap::get_name(void) const {
	return (this->name);
}