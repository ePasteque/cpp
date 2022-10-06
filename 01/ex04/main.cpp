/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:06:12 by lbattest          #+#    #+#             */
/*   Updated: 2022/09/13 14:22:06 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong numbers of arguments" << std::endl;
		return 1;
	}
	if (access(argv[1], F_OK) == -1) {
		std::cout << "File doesn't exist" << std::endl;
		return 1;
	}
	std::ifstream	ifs;
	ifs.open(argv[1], std::ifstream::in);
	if (ifs.fail()) {
		std::cout << "File cann't be opened" << std::endl;
		return 1;
	}
	std::string		str;
	std::string		cur_file = argv[1];
	std::string 	needle = argv[2];
	std::string 	new_str = argv[3];
	std::string		new_file = cur_file.append(".replace");
	std::ofstream	ofs(new_file);
	std::size_t		start;
	char			buf[2];
	char			c = ifs.get();
	int				len = needle.length();
	
	buf[0] = c;
	buf[1] = '\0';
	while (ifs.good()) {
		str.append(buf);
		c = ifs.get();
		buf[0] = c;
	}
	start = str.find(needle);
	while (start != std::string::npos) {
		str.erase(start, len);
		str.insert(start, new_str);
		start = str.find(needle, start + 1);
	}
	ofs << str;
	return 0;
}