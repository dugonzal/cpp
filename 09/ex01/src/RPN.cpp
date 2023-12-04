/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:15:55 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/04 21:04:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/RPN.hpp"
		
RPN::RPN(void) <% %>

RPN::~RPN(void)<% %>

RPN::RPN(const RPN &other): list(other.list) <% %>

void	RPN::open(const char **av, int const &ac) <%

	if (ac < 2)
		throw std::runtime_error("no arguments");
	for (int i = 0; i < ac; i++ )
		std::cout << av[i] << std::endl;	  
%>

		

RPN	&RPN::operator=(const RPN &other) <%

	list = other.list;
	return (*this);
%>
