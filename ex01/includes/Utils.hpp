/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:36:39 by toshota           #+#    #+#             */
/*   Updated: 2024/06/06 20:03:34 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
#include <sstream>	//	std::istringstream
#include <cctype> 	//	isprint()
#include <cstdlib>	//	std::exit(exit_status);
# define PROMPT "\x1b[32m>$ \x1b[39m"
# define README "phonebook supports: ADD, SEARCH, EXIT"

typedef enum s_exit_status
{
	NORMAL,
	ERROR
}		t_exit_status;

void	exit_with_msg(const std::string msg, const int exit_status);
std::string input(const std::string prompt);
int	string_to_int(const std::string &str);
bool is_str_only_space(std::string str);

#endif
