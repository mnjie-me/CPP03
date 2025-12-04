/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:45:27 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/04 12:31:49 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamonTrap: public ScavTrap, public FragTrap

{
	private:

		std::string name;

	public:

		DiamonTrap();
		DiamonTrap(std::string n);
		~DiamonTrap();

		void attack(const std::string& target);
		void whoAmI();
};