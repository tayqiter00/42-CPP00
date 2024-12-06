/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtay <qtay@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:28:45 by qtay              #+#    #+#             */
/*   Updated: 2024/12/06 11:56:33 by qtay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/**
 * :: is the scope resolution operator. Its purpose is as follows:
 * 1. To access a global var. when there is a local var. with same name
 * 2. To define a function outside a class
 * 3. To access a class’s static variables
 * 4. (many more)
 * 
 * Namespace provide the space where we can define or declare identifier i.e.
 * variable,  method, classes. In other words, it defines the scope/space/
 * context in which identifiers are define.
 * 
 * std::string is defined in the <string> header. iostream might already
 * include it but may not be portable. It is a standard library class in C++
 * that automatically manages the memory for its contents. Can use methods
 * e.g., length(), size(), empty(), append(), substr(), find(), replace().
 * Methods are simply functions that belong to a class.
 */
int main(int argc, char **argv)
{
    int i = 1;
    std::string str;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc)
    {
		str = str.append(argv[i]);
		i++;
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    std::cout << str << std::endl;
	return (0);
}
