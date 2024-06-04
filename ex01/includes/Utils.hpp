/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:36:39 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 19:25:35 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
#include <sstream>	//	std::istringstream
# define PROMPT "\x1b[32m>$ \x1b[39m"
# define README "phonebook supports: ADD, SEARCH, EXIT"

typedef enum s_exit_status
{
	NORMAL,
	ERROR,
}		t_exit_status;

void	exit_with_msg(const std::string msg, const int exit_status);
std::string input(const std::string prompt);
int	string_to_int(const std::string &str);

#endif
