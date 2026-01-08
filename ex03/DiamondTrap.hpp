/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:45:27 by mari-cruz         #+#    #+#             */
/*   Updated: 2026/01/08 12:58:51 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap
	: public ScavTrap
	, public FragTrap

{
	private:

		std::string name;

	public:

		DiamondTrap();
		DiamondTrap(std::string n);
		DiamondTrap(const DiamondTrap& obj);
		DiamondTrap& operator=(const DiamondTrap& obj);
		~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI();
};