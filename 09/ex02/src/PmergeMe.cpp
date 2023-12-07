/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/07 12:31:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(void) <% %>

PmergeMe::~PmergeMe(void) <% %>

PmergeMe::PmergeMe(const PmergeMe &other): a(other.a), b(other.b) <% %>

void	PmergeMe::parser(const char *str, int const &len) const <%

	int  i = -1;
	
	if (str[0] == '+')
		i = 0;
	
	while (++i < len)
		if (!std::isdigit(str[i]))
			throw std::runtime_error("Error no number");
%>

PmergeMe::PmergeMe(const char **av) <%

	for (int i = 0; av[i] ; i++) <%
		
		parser(av[i], strlen(av[i]));
		long int tmp = atof(av[i]);
		if (tmp < 0 || tmp > INT_MAX)
			throw std::runtime_error("Error Negative number or INT_MAX");
		a.push_back(tmp);
		b.push_back(tmp);
	 %>
	 for (std::vector<int>::iterator it = a.begin(); it != a.end(); it++)
		std::cout << *it << std::endl;
%>

PmergeMe &PmergeMe::operator=(const PmergeMe &other) <%
	
	if (&other == this)
		return (*this);
	
	a = other.a;
	b = other.b;
	return (*this);
%>

