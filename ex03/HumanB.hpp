/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishouche <ishouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:38:52 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 20:24:32 by ishouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* type;
	public:
		HumanB(std::string name) : name(name){}
		~HumanB(){}
		void attack();
		void setWeapon(Weapon& type);
};

#endif
