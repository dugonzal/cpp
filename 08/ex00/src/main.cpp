/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:49:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 15:06:40 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easy.hpp"

void printVector(std::vector<int> tmp) <%
	
	for(std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		std::cout << *it << std::endl;
	
	std::cout << std::endl;
	
	//for (std::vector<std::string>::reverse_iterator it = tmp.rbegin(); it != tmp.rend(); it++)
	//	std::cout << *it << std::endl;
%>


int	main(void) <%
	int array[] = {2, 3, 4, 5, 1, 23, 32};
	
//	std::string str[] = {"hola", "mundo", "vectorial", "compon", "clases"};	

  //  std::vector<std::string> tmp(str, str + sizeof(str) / sizeof(str[0]));
    std::vector<int> arrayInt(array, array + sizeof(array) / sizeof(array[0]));

	printVector((arrayInt));
	try <%
		// literalmente dice que tiene que ser el segundo parametro un enetero asi que f, pero mas facil	
		::easyfind<std::vector<int> >(arrayInt, 32);
		easyfind(arrayInt, 31);

	%>
	catch(std::exception &e) <%  
		std::cerr << e.what() << std::endl;
	%>

%>
