#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		void whoAmI();

		void set_name(const std::string &name);
		const std::string get_name(void) const;

		const DiamondTrap& operator=(const DiamondTrap &to_assignation);
		DiamondTrap(const DiamondTrap &old);
		DiamondTrap(const std::string &name);
		DiamondTrap();
		~DiamondTrap();
};

#endif