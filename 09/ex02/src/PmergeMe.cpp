/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/07 17:55:22 by Dugonzal         ###   ########.fr       */
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
			throw std::logic_error("Error");
%>

PmergeMe::PmergeMe(const char **av) <%

	for (int i = 0; av[i] ; i++) <%
		
		parser(av[i], strlen(av[i]));
		long int tmp = atof(av[i]);
		if (tmp < 0 || tmp > INT_MAX)
			throw std::out_of_range("Error");
		a.push_back(tmp);
		b.push_back(tmp);
	 %>
/*
	printData(a.begin(), a.end(), "before");
	
	clock_t inicio = clock();
	std::sort(a.begin(), a.end());
	clock_t fin = clock();
	printData(a.begin(), a.end(), "after ");
	std::cout << "Time to process a range of " << a.size() << " elements with std::vetor<int> : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin - inicio) / CLOCKS_PER_SEC) << std::endl;
*/%>

template <class iter>
void PmergeMe::printData(const iter &begin, const iter &end, const std::string &message) const <%
	
	if (!message.empty())
		std::cout << message << " : ";
	
	for (iter it = begin; it != end; it++)
		std::cout << *it << " ";
	
	std::cout << std::endl;
%>

PmergeMe &PmergeMe::operator=(const PmergeMe &other) <%
	
	a = other.a;
	b = other.b;
	return (*this);
%>
