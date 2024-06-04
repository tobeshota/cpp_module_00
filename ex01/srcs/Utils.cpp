/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:38:01 by toshota           #+#    #+#             */
/*   Updated: 2024/06/04 17:33:09 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void exit_with_msg(const std::string msg, const int exit_status)
{
	std::cerr << msg << std::endl;
	exit(exit_status);
}

// 標準入力からString型の文字列を取得する
std::string input(const std::string prompt)
{
	std::string cmd;

	std::cout << prompt;
	std::getline(std::cin, cmd);
	if (std::cin.eof() || std::cin.fail())
		exit_with_msg("Error", ERROR);
	return (cmd);
}
