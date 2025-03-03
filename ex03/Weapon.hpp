/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:05:11 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 17:39:17 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type) : type(type){};
		~Weapon(){};
		const	std::string &getType() const;
		void	setType(std::string type){};
};

#endif
