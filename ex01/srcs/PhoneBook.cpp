/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:14:29 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 17:32:06 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#define TABLE_HEADER "|     index|first name| last name|  nickname|"
#define RULED_LINE "- - - - - - - - - - - - - - - - - - - - - - -"

/* 新しいcontentを保存する
 * 8個までは格納するだけ．8個以降は最も古いcontentを置き換える
 */
void PhoneBook::Add(const Contact contact)
{
	this->m_contact[m_old_index] = contact;
	m_old_index = (m_old_index + 1) % 8;
}

// 文字列を10文字長で省略して返す
static std::string get_in_10length(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

/* 0-8個の電話帳を一覧で表示する
 * 10文字長で出す．10文字以上の値が入る場合には10文字目を「.」とし，以降の文字は出さない
 * 文字はパイプで区切る
 * 右揃えで出す
 */
void PhoneBook::Search(void) const
{
	std::cout << RULED_LINE << std::endl;
	std::cout << TABLE_HEADER << std::endl;
	std::cout << RULED_LINE << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << get_in_10length(this->m_contact[i].get_first_name()) << "|";
		std::cout << std::setw(10) << get_in_10length(this->m_contact[i].get_last_name()) << "|";
		std::cout << std::setw(10) << get_in_10length(this->m_contact[i].get_nickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << RULED_LINE << std::endl;
}

PhoneBook::PhoneBook(void)
{
	m_old_index = 0;
}
