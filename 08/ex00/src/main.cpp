/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:49:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 13:40:48 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easy.hpp"

int	main(void) <%
	//char array[] = {2, 3, 4, 5, 1, 23, 32};
    //std::vector<int> tmp(array, array + sizeof(array) / sizeof(array[0]));
	
	std::string str[] = {"hola", "mundo", "vectorial", "compon", "clases"};	

    std::vector<std::string> tmp(str, str + sizeof(str) / sizeof(str[0]));

	tmp.push_back("end");
	for(std::vector<std::string>::iterator it = tmp.begin(); it != tmp.end(); it++)
		std::cout << *it << std::endl;
	std::cout << std::endl;
	for (std::vector<std::string>::reverse_iterator it = tmp.rbegin(); it != tmp.rend(); it++)
		std::cout << *it << std::endl;

	//::easyfind<int>(tmp, 3);

%>
