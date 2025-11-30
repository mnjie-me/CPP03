/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:34:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/30 12:48:13 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	ClapTrap b("Caroline");
	ClapTrap c;
	ScavTrap n("Diana");
	ScavTrap m;
	FragTrap x("Alexia");
	FragTrap y;
	c = b;
	m = n;
	y = x;
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

	m.stats();
	m.attack("Arlo");
	m.takeDamage(damage);
	m.beRepaired(repair);
	m.guardGate();
	m.stats();

	std::cout << "=========================" << std::endl;
	std::cout << "========TEST 3===========" << std::endl;
	std::cout << "=========================" << std::endl;

	y.stats();
	y.attack("Michael");
	y.takeDamage(damage);
	y.beRepaired(repair);
	y.highFivesGuys();
	y.stats();
	return (0);
}