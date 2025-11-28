/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:27:12 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/27 13:13:40 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap

{
	private:

		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	
	public:
	
		ClapTrap();
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void stats()const;
		int getHitPoints();
		int getEnergyPoints();
};

