/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:58:49 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 19:42:09 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Utils.hpp"
# include <iomanip> //	std::setw(10)
# include <iostream>
# define SEARCH_PROMPT "\x1b[32mSEARCH $ \x1b[39m"

class PhoneBook
{
  private:
	Contact m_contact[8];
	int m_old_index; //	格納するcontactは8個である．9以降は最も古いインデックスold_indexのcontactと置き換える
  public:
	PhoneBook(void);
	void Add(const Contact m_contact);
	void Search(void) const;
	void put_phone_book(void) const;
	void put_search_target(const int index) const;
};

#endif
