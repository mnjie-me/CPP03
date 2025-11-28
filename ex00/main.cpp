/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:34:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/27 15:32:05 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::getHitPoints()
{
	return (hitPoints);
}

int ClapTrap::getEnergyPoints()
{
	return (energyPoints);
}

void ClapTrap::stats()const
{
	std::cout << "\n=============== Total Stats ================" << std::endl;
	std::cout << name << "   hit points: " << hitPoints
	<< "  energy points: " << energyPoints
	<< "  attack damage: " << attackDamage << std::endl << std::endl;
}

int main(void)
{
	ClapTrap a;
	ClapTrap b("Ripper");
	ClapTrap c;
	c = b;
	int damage = 5;
	int repair = 2;

	std::cout << "=========================" << std::endl;
	std::cout << "========TEST 1===========" << std::endl;
	std::cout << "=========================" << std::endl;

	c.stats();
	c.attack("Marvin");
	c.takeDamage(damage);
	c.beRepaired(repair);
	c.stats();

	std::cout << "=========================" << std::endl;
	std::cout << "========TEST 2===========" << std::endl;
	std::cout << "=========================" << std::endl;

	while (b.getHitPoints() > 0)
	{
		b.stats();
		if (b.getEnergyPoints() <= 0)
		{
			b.attack("Arlo");
			b.stats();
			return (0);
		}
		b.attack("Arlo");
		b.takeDamage(damage);
		b.beRepaired(repair);
	}
	b.stats();
	return (0);
}