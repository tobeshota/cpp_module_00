/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:41:03 by toshota           #+#    #+#             */
/*   Updated: 2024/06/05 11:08:27 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phonebook;

	std::cout << README << std::endl;
	while (true)
	{
		cmd = input(PROMPT);
		if (cmd == "ADD")
		{
			Contact contact;
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
