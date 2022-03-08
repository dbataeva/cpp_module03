#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		void highFivesGuys(void);

		const FragTrap& operator=(const FragTrap &to_assignation);
		FragTrap(const FragTrap &old);
		FragTrap(const std::string &name);
		FragTrap();
		~FragTrap();
};

#endif