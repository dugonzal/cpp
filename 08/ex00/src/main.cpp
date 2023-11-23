/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:49:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 17:36:06 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easy.hpp"

void printVector(std::vector<int> tmp) <%
	
	for(std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		std::cout << *it << std::endl;
	
	std::cout << std::endl;
	
	for (std::vector<int>::reverse_iterator it = tmp.rbegin(); it != tmp.rend(); it++)
		std::cout << *it << std::endl;
%>


int	main(int ac, char **av) <%
	int array[] = {2, 3, 4, 5, 1, 23, 32};
	
	try <%
		if (ac != 2)
			return (1);
		std::vector<int> arrayInt(array, array + sizeof(array) / sizeof(array[0]));
	
		std::list<int> arrayList(array, array + sizeof(array) / sizeof(array[0]));
	
		std::deque<int> arrayDuque(array, array + sizeof(array) / sizeof(array[0]));
	
		printVector((arrayInt));
	
		// vector
		::easyfind< std::vector<int> >(arrayInt, std::atoi(av[1]));
		easyfind(arrayInt, std::atoi(av[1]));
		
		// list 
		::easyfind< std::list<int> >(arrayList, std::atoi(av[1]));
		easyfind(arrayList, std::atoi(av[1]));

		// deque 
		::easyfind< std::deque<int> >(arrayDuque, std::atoi(av[1]));
		easyfind(arrayDuque, std::atoi(av[1]));
		
	%>
	catch(std::exception &e) <%
		std::cerr << "Error: " << e.what() << std::endl;
	%>
	return (0);
%>
