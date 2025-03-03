/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismail <ismail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:42 by ismail            #+#    #+#             */
/*   Updated: 2025/03/03 15:51:32 by ismail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of string : " << &string << std::endl;
	std::cout << "memory address of stringPTR : " << &stringPTR << std::endl;
	std::cout << "memory address of stringREF : " << &stringREF << std::endl;

	std::cout << "content of string : " << string << std::endl;
	std::cout << "content of stringPTR : " << *stringPTR << std::endl;
	std::cout << "content of stringREF : " << stringREF << std::endl;

}
