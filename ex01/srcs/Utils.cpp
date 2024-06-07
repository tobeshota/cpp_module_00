/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:38:01 by toshota           #+#    #+#             */
/*   Updated: 2024/06/07 17:22:21 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void exit_with_msg(const std::string msg, const int exit_status)
{
	std::cout << msg << std::endl;
	std::exit(exit_status);
}

// 文字列型が表示文字のみで構成されているかを判定する
static bool can_str_print(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (std::isprint(str[i]) == 0)
			return (false);
	}
	return (true);
}

// 標準入力からString型の文字列を取得する
std::string input(const std::string prompt)
{
	std::string cmd;

	std::cout << prompt;
	std::getline(std::cin, cmd);
	if (std::cin.eof() || std::cin.fail() || can_str_print(cmd) == false)
		exit_with_msg("Error", ERROR);
	return (cmd);
}
