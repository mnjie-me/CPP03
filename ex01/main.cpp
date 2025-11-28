/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:34:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/28 12:48:59 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap n("ScavTrap");
	ClapTrap a;
	ClapTrap b("ClapTrap");
	ClapTrap c;
	c = b;
	int damage = 5;
	int repair = 2;

	std::cout << "=========================" << std::endl;
	std::cout << "========TEST 1===========" << std::endl;
	std::cout << "=========================" << std::endl;

	c.stats();
	c.attack("Harvey");
	c.takeDamage(damage);
	c.beRepaired(repair);
	c.stats();

	std::cout << "=========================" << std::endl;
	std::cout << "========TEST 2===========" << std::endl;
	std::cout << "=========================" << std::endl;

	n.stats();
	n.attack("Arlo");
	n.takeDamage(damage);
	n.beRepaired(repair);
	n.guardGate();
	n.stats();
	return (0);
}