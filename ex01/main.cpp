/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:08:02 by qtay              #+#    #+#             */
/*   Updated: 2024/11/06 13:49:27 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "PhoneBook.hpp"

/**
 * Generally, we don't use "std::cin >> input" when reading strings because it
 * reads until a whitespace is encountered. Use std::getline() instead.
 */
int	main()
{
	PhoneBook	pb1;
	std::string	input;

	while (true)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT\n";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			pb1.addContacts();
		}
		else if (input == "SEARCH")
		{
			pb1.searchContacts();
		}
		else if (input == "EXIT")
			return (0);
		else if (input == "\0" || std::cin.fail())
			return (1);
		else
			std::cout << "Invalid input command!\n";
	}
	return (0);
}
