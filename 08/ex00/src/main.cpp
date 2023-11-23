/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:49:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 14:43:19 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easy.hpp"

void printVector(std::vector<std::string> tmp) <%
	
	for(std::vector<std::string>::iterator it = tmp.begin(); it != tmp.end(); it++)
		std::cout << *it << std::endl;
	
	std::cout << std::endl;
	
	//for (std::vector<std::string>::reverse_iterator it = tmp.rbegin(); it != tmp.rend(); it++)
	//	std::cout << *it << std::endl;
%>


int	main(void) <%
	//int arrayInt[] = {2, 3, 4, 5, 1, 23, 32};
	
	std::string str[] = {"hola", "mundo", "vectorial", "compon", "clases"};	

    std::vector<std::string> tmp(str, str + sizeof(str) / sizeof(str[0]));

	tmp.push_back("end");
	 tmp.push_back("perrro");
	
	printVector(tmp);

	::easyfind<std::vector <std::string> >(tmp, "hola");

%>
