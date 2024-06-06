/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:58:49 by toshota           #+#    #+#             */
/*   Updated: 2024/06/06 20:22:00 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Utils.hpp"
# include <array>
# include <iomanip> //	std::setw(10)
# include <iostream>
# define SEARCH_PROMPT "\x1b[32mSEARCH $ \x1b[39m"
# define MAX_CONTACTS_INDEX 8

class PhoneBook
{
  private:
	std::array<Contact, MAX_CONTACTS_INDEX> m_contact;
	int m_old_index;
	void put_phone_book(void) const;
	void put_search_target(const int index) const;
	int	string_to_int(const std::string str) const;
  public:
	PhoneBook(void);
	void add(void);
	void search(void) const;
	void exit(void) const;
};

#endif
