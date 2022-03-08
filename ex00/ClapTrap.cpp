#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->name << " attac " << target << ", causing ";
	std::cout << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " is repaired with " << amount << " points" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitpoints(10), energy(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " with " << this->hitpoints << " hitpoints, ";
	std::cout << this->energy << " energy_points and " << this->attack_damage;
	std::cout << " attack damage is created" << std::endl;
}

ClapTrap::ClapTrap(void) {
	std::cout << "default constructor is called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl;
}

const ClapTrap& ClapTrap::operator=(const ClapTrap &to_assignation) {
	if (this != &to_assignation) {
		this->set_name(to_assignation.get_name());
		this->set_hitpoints(to_assignation.get_hitpoints());
		this->set_energy(to_assignation.get_energy());
		this->set_attack_damage(to_assignation.get_attack_damage());
	}
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &old) {
	*this = old;
}

void ClapTrap::set_name(const std::string &name) {
	this->name = name;
}

const std::string ClapTrap::get_name(void) const {
	return (this->name);
}

void ClapTrap::set_hitpoints(unsigned int amount) {
	this->hitpoints = amount;
}

unsigned int ClapTrap::get_hitpoints(void) const {
	return(this->hitpoints);
}

void ClapTrap::set_energy(unsigned int amount) {
	this->energy = amount;
}

unsigned int ClapTrap::get_energy(void) const {
	return (this->energy);
}

void ClapTrap::set_attack_damage(unsigned int amount) {
	this->attack_damage = amount;
}

unsigned int ClapTrap::get_attack_damage(void) const {
	return (this->attack_damage);
}