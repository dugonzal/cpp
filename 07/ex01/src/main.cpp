/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:50:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 18:48:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp" 

void print(const std::string &s) <%
	std::cout << s << std::endl;
%>

int	main(void) <%

	std::string a[2] = {"gola mi", "ppppppppp ppp "};

	::iter<std::string>(a, (sizeof(a) / sizeof(a[0])), print);
	::iter(a, (sizeof(a) / sizeof(a[0])), print);

	return (0);
%>
