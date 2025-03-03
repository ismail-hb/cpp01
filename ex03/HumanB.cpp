/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishouche <ishouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:14:01 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 20:30:39 by ishouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << type << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	this->type = &type;
	this->type->getType();
}
