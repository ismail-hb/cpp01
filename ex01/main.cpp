/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 03:18:18 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 04:09:58 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie = zombieHorde(20, "jack");
	for (int i = 0; i < 20; i++)
		zombie[i].announce();
	delete[] zombie;
	return 0;
}
