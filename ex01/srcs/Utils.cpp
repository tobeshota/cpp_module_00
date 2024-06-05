/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:38:01 by toshota           #+#    #+#             */
/*   Updated: 2024/06/05 10:59:45 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void exit_with_msg(const std::string msg, const int exit_status)
{
	std::cerr << msg << std::endl;
	exit(exit_status);
}

// 引数が表示文字(ASCIIコード32-126番の範囲内の文字)かどうか判定する
static bool can_str_print(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isprint(str[i]))
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

// 入力文字が数値またはハイフンかを調べる
bool is_str_phone_number(const std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isnumber(str[i]) && str[i] != '-')
			return (false);
	}
	return (true);
}

int	string_to_int(const std::string &str)
{
	int	result;

	std::istringstream iss(str);
	if (!(iss >> result))
		return (-1); // 数値形式ではない場合は0を返す
	return (result);
}
