/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:51:52 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/04 12:44:33 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamonTrap::DiamonTrap() : ClapTrap("")
{
	this->name = "";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamonTrap default constructor called " << name << std::endl;
}

DiamonTrap::DiamonTrap(std::string n) : ClapTrap(n + "_clap_name"), ScavTrap(n), FragTrap(n)
{
	this->name = n;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << name << " DiamontTrap constructor called" << std::endl;
}

DiamonTrap::~DiamonTrap()
{
	std::cout << "DiamonTrap destructor called " << name << std::endl;
}

void DiamonTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamonTrap::whoAmI()
{
	std::cout << "DiamonTrap name is " << this->name
	<< " and ClapTrap name is " << ClapTrap::name << std::endl;
}
