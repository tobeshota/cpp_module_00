/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:41:03 by toshota           #+#    #+#             */
/*   Updated: 2024/06/06 19:33:10 by toshota          ###   ########.fr       */
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
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			phonebook.exit();
	}
}
