#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		int			hitpoints;
		int			energy;
		int			attack_damage;
		
	public:
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void set_name(const std::string &name);
		const std::string get_name(void) const;
		void set_hitpoints(unsigned int amount);
		unsigned int get_hitpoints(void) const;
		void set_energy(unsigned int amount);
		unsigned int get_energy(void) const;
		void set_attack_damage(unsigned int amount);
		unsigned int get_attack_damage(void) const;

		const ClapTrap& operator=(const ClapTrap &to_assignation);
		ClapTrap(const ClapTrap &old);
		ClapTrap(const std::string &name);
		ClapTrap(const std::string &name, unsigned int hitpoints);
		ClapTrap(const std::string &name, unsigned int hitpoints, unsigned int energy);
		ClapTrap();
		~ClapTrap();
};

#endif