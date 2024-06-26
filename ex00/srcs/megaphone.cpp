/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:40:32 by toshota           #+#    #+#             */
/*   Updated: 2024/06/06 19:11:26 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>	//	std::toupper()

int	main(int argc, char *argv[])
{
	std::string str;
	if (argc == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		// コマンドライン引数の各文字をstring型strに格納する
		for (int i = 1; argv[i]; i++)
			str += argv[i];
		// strの各文字を大文字にしていく
		for (std::size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
	}
	std::cout << str << std::endl;
}
