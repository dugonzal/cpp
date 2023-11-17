/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:48:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/17 12:37:14 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

int	main(void) <%

	int  a = 90;
	int  n = 65;
	
	std::cout << ::min(a, n) << std::endl;
	std::cout << ::min(n, a) << std::endl;
	std::cout << std::min(n, a) << std::endl;
	std::cout << std::max(n, a) << std::endl;
	
	std::cout << n <<  std::endl;
	std::cout <<  a << std::endl <<  std::endl;
	 
	
	std::swap(n, a);

	std::cout << n <<  std::endl;
	std::cout <<  a << std::endl;

	return (0);
%>
