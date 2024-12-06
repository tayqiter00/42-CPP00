/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:17:42 by qtay              #+#    #+#             */
/*   Updated: 2024/12/05 21:39:09 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CPP
# define CONTACT_CPP

/**
 * iomanip (manipulation) for setw to set the width of the next output field
 * in a stream.
 * 
 * cstdlib for exit
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <cctype>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNum;
		std::string	darkestSecret;

	public:
		Contact(void);
		void	addInfo(void);
		void	printContactInfo(Contact contact);
		void	printBriefInfo(Contact contact, int i);
};

#endif
