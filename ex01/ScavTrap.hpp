#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void guardGate();

		const ScavTrap& operator=(const ScavTrap &to_assignation);
		ScavTrap(const ScavTrap &old);		
		void attack(std::string const &target);
		ScavTrap(const std::string &name);
		ScavTrap();
		~ScavTrap();
};

#endif