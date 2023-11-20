/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:50:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/20 11:08:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp" 

template <class p>
void print(p x) <%
	std::cout << x << std::endl;
%>

int	main(void) <%

	std::string a[] = {"cadena 1", "cadena 2", "cadena 3"};
	int arrInt[] = {34, 43, 33, 43, 43, 43, 43, 24, 42};
	char arrChar[] = {'d', 'c', 'x', 'd', 'p', 'd'};

	::iter<std::string>(a, (sizeof(a) / sizeof(a[0])), ::print<std::string>);
	std::cout << std::endl << std::endl;
	::iter(arrInt, (sizeof(arrInt) / sizeof(arrInt[0])), ::print<int>);
	
	std::cout << std::endl << std::endl;
	
	iter(arrChar, (sizeof(arrChar) / sizeof(arrChar[0])), print<char>);

	return (0);
%>
