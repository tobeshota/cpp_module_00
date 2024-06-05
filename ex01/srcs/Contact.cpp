/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:36:14 by toshota           #+#    #+#             */
/*   Updated: 2024/06/05 11:06:58 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Utils.hpp"

void Contact::input_first_name(void)
{
	while(this->m_first_name.empty())
		this->m_first_name = input(FIRST_NAME_PROMPT);
}

void Contact::input_last_name(void)
{
	while(this->m_last_name.empty())
		this->m_last_name = input(LAST_NAME_PROMPT);
}

void Contact::input_nickname(void)
{
	while(this->m_nickname.empty())
		this->m_nickname = input(NICKNAME_PROMPT);
}

void Contact::input_phone_number(void)
{
	while(this->m_phone_number.empty() || !is_str_phone_number(this->m_phone_number))
		this->m_phone_number = input(PHONE_NUMBER_PROMPT);
}

void Contact::input_darkest_secret(void)
{
	while(this->m_darkest_secret.empty())
		this->m_darkest_secret = input(DARKEST_SECRET_PROMPT);
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