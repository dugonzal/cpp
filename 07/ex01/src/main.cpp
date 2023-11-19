/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:50:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 18:03:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp" 

void print(char x) <%

	std::cout << x << std::endl;
%>

int	main(void) <%

	char a = 'a';

	::iter<char>(a, print);
	return (0);
%>
