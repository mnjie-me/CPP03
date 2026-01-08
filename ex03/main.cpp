/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:34:54 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/01/08 12:37:00 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void ClapTrap::stats()const
{
	std::cout << "\n=============== Total Stats ================" << std::endl;
	std::cout << name << "   hit points: " << hitPoints
	<< "  energy points: " << energyPoints
	<< "  attack damage: " << attackDamage << std::endl << std::endl;
}

int main(void)
{
	
	ClapTrap a("ClapTrap");
	DiamondTrap d("DiamondTrap");
	DiamondTrap e;
	e = d;
	int damage = 5;
	int repair = 2;

	e.stats();
	e.attack("Daniel");
	e.takeDamage(damage);
	e.beRepaired(repair);
	e.whoAmI();
	e.stats();
	return (0);
}