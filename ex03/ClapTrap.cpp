/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:05:02 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/04 12:10:25 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap()
	: name(""), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
	: name(n), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	std::cout << name << " ClapTrap copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	std::cout << "ClapTrap assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl; 
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "ClapTrap could not attack" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name 
	<< " attacks " << target 
	<< " causing " << attackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap died!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap has no energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name 
	<< " was attacked, causing " << amount
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "ClapTrap could not repair itself!" << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name 
	<< " repaired itself " << amount
	<< " points of damage!" << std::endl;
}
