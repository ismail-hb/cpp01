/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:14:01 by ismail            #+#    #+#             */
/*   Updated: 2025/03/04 07:51:27 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
	if (type)
		std::cout << name << " attacks with their " << type->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	this->type = &type;
	this->type->getType();
}
