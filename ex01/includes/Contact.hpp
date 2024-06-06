/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:36:34 by toshota           #+#    #+#             */
/*   Updated: 2024/06/06 20:21:22 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# define FIRST_NAME_PROMPT "first name:\t"
# define LAST_NAME_PROMPT "last name:\t"
# define NICKNAME_PROMPT "nickname:\t"
# define PHONE_NUMBER_PROMPT "phone number:\t"
# define DARKEST_SECRET_PROMPT "darkest secret:\t"

class Contact
{
  private:
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_phone_number;
	std::string m_darkest_secret;
	void input_first_name(void);
	void input_last_name(void);
	void input_nickname(void);
	void input_phone_number(void);
	void input_darkest_secret(void);
	bool is_str_number(const std::string str) const;
	bool is_str_only_space(const std::string str) const;

  public:
	void set();
	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_phone_number(void) const;
	std::string get_darkest_secret(void) const;
};

#endif
