/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:36:14 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 17:36:47 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Utils.hpp"

void Contact::input_first_name(void)
{
	this->m_first_name = input("first name:\t");
}

void Contact::input_last_name(void)
{
	this->m_last_name = input("last name:\t");
}

void Contact::input_nickname(void)
{
	this->m_nickname = input("nickname:\t");
}

void Contact::input_phone_number(void)
{
	this->m_phone_number = input("phone number:\t");
}

void Contact::input_darkest_secret(void)
{
	this->m_darkest_secret = input("darkest secret:\t");
}

std::string Contact::get_first_name(void) const
{
	return (this->m_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->m_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->m_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->m_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->m_darkest_secret);
}

// インスタンスcontentの各フィールドを標準入力から読み込む
void Contact::set(void)
{
	input_first_name();
	input_last_name();
	input_nickname();
	input_phone_number();
	input_darkest_secret();
}
