/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 21:11:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(void) <% %>

PmergeMe::~PmergeMe(void) <% %>

PmergeMe::PmergeMe(const PmergeMe &other): a(other.a), b(other.b) <% %>

void	PmergeMe::parser(const char *str, int const &len) const <%
	for (int j = 0; j < len; j++)
		if (!std::isdigit(str[j]))
			throw std::runtime_error("Error no number");
%>

PmergeMe::PmergeMe(const char **av) <%

	for (int i = 0; av[i] != 0; i++) <%
		
		parser(av[i], strlen(av[i]));
		int tmp = atof(av[i]);
		if (tmp < 0)
			throw std::runtime_error("Error Negative number");
		a.push_back(tmp);
		b.push_back(tmp);
	 %>
%>

PmergeMe &PmergeMe::operator=(const PmergeMe &other) <%
	
	if (&other == this)
		return (*this);
	
	a = other.a;
	b = other.b;
	return (*this);
%>

