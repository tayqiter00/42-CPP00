#include "Contact.hpp"

Contact::Contact(void) {}

bool	isOnlyWhitespace(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (!std::isspace(static_cast<unsigned char>(str[i])))
		{
            return (false);
        }
    }
    return (true);
}

std::string	getInput(const std::string prompt)
{
	std::string	input;
	
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty() || isOnlyWhitespace(input))
		{
			std::cout << "No empty fields allowed!\n";
			std::exit(1);
		}
		else
			return (input);
	}
}

void	Contact::addInfo(void)
{
	this->firstName = getInput("first name    : ");
	this->lastName = getInput("last name     : ");
	this->nickname = getInput("nickname      : ");
	this->phoneNum = getInput("phone number  : ");
	this->darkestSecret = getInput("darkest secret: ");
}

void	Contact::printContactInfo(Contact contact)
{
	std::cout << "first name    : " << contact.firstName << std::endl;
	std::cout << "last name     : " << contact.lastName << std::endl;
	std::cout << "nickname      : " << contact.nickname << std::endl;
	std::cout << "phone number  : " << contact.phoneNum << std::endl;
	std::cout << "darkest secret: " << contact.darkestSecret << std::endl;
}

static void	printTruncStr(const std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << str;
}

void	Contact::printBriefInfo(Contact contact, int i)
{
	std::cout << "         " << i << "|";
	printTruncStr(contact.firstName);
	std::cout << "|";
	printTruncStr(contact.lastName);
	std::cout << "|";
	printTruncStr(contact.nickname);
	std::cout << "\n";
}
