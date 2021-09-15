/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:39:33 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/15 22:52:38 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"

std::string _replace(std::string in, std::string s1, std::string s2)
{
	std::string replace_string;
	int index;
	
	while ((index = in.find(s1)) != std::string::npos)
	{
		replace_string.append(in.substr(0, index));
		replace_string.append(s2);
		in.erase(0, index + s1.size());
	}
	replace_string.append(in);
	return (replace_string);
}

std::string filename_replace(std::string filename)
{
	int index;

	if ((index = filename.find(".")) != std::string::npos)
	{
		filename.erase(index, filename.size() - 1);
	}
	return (filename.append(".replace"));
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::fstream ifs(argv[1]);
		std::string input;
		getline(ifs, input);
		std::ofstream ofs(filename_replace(argv[1]));
		ofs << _replace(input, argv[2], argv[3]);
	}
	else
	{
		std::cout << "Invalid count of arguments\n";
	}
}