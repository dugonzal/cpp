/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:49:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 13:19:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/easy.hpp"

int	main(void) <%
	int array[] = {2, 3, 4, 5, 1, 23, 32};
	
    std::vector<int> tmp(array, array + sizeof(array) / sizeof(array[0]));

	std::cout << tmp.back() << std::endl; // al  final del vector 
	std::cout << tmp.front() << std::endl; // al inicio del vector
	std::cout << tmp.at(4) << std::endl; // con at se accede a un elemnto concreto del vector
	std::cout << tmp.size() << std::endl; 
	std::cout << tmp.capacity() << std::endl; 
	tmp.resize(0) ; 
	tmp.swap(0) ; 
	std::cout << tmp.capacity() << std::endl; 
//	::easyfind<int>(a, 3);

%>
