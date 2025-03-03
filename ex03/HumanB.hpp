/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:38:52 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 18:33:22 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		std::string type;
	public:
		HumanB(std::string name) : name(name){};
		~HumanB(){};
		void attack();
		void setWeapon(Weapon type){};
};

#endif
