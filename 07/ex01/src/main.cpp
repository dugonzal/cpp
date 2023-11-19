/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:50:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 19:00:31 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp" 

template <class p>
void print(p x) <%
	std::cout << x << std::endl;
%>


int	main(void) <%

	std::string a[] = {"cadena 1", "cadena 2", "cadena 3"};
	int arrInt[] = {2334, 4343, 4343, 4343, 4343, 4343 ,43};
	 
	::iter<std::string>(a, 2, ::print<std::string>);
	std::cout << std::endl << std::endl;
	::iter(arrInt, (sizeof(arrInt) / sizeof(arrInt[0])), print<int>);

	return (0);
%>
