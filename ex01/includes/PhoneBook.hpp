/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:58:49 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 17:32:19 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip> //	std::setw(10)
# include <iostream>

class PhoneBook
{
  private:
	Contact m_contact[8];
	int m_old_index; //	格納するcontactは8個である．9以降は最も古いインデックスold_indexのcontactと置き換える
  public:
	PhoneBook(void);
	void Add(const Contact m_contact);
	void Search(void) const;
};

#endif
