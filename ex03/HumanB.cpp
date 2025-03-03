/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:14:01 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 18:36:16 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << type << std::endl;
}

void HumanB::setWeapon(Weapon type)
{
	this->type = type.getType();
}
