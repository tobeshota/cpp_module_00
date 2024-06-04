/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:41:03 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 17:45:56 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.hpp"

int main(void)
{
	std::string cmd;
	Contact contact;
	PhoneBook phonebook;

	std::cout << README << std::endl;
	while (true)
	{
		cmd = input(PROMPT);
		if (cmd == "ADD")
		{
			contact.set();
			phonebook.Add(contact);
		}
		else if (cmd == "SEARCH")
		{
			phonebook.Search();
		}
		else if (cmd == "EXIT")
		{
			exit_with_msg("exit", NORMAL);
		}
	}
}
