/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/07 21:08:35 by Dugonzal         ###   ########.fr       */
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

template <class iter>
bool PmergeMe::isSorted(const iter &begin, const iter end) const <%
    return (std::adjacent_find(begin, end, std::greater<typename iter::value_type>()) == end);
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
	
	if (a.size() < 2)
		throw std::runtime_error("Error");
	else if (isSorted(a.begin(), a.end()))
		exit(0);
/*
	printData(a.begin(), a.end(), "before");
	
	clock_t inicio = clock();
	std::sort(a.begin(), a.end());
	clock_t fin = clock();
	printData(a.begin(), a.end(), "after ");
	std::cout << "Time to process a range of " << a.size() << " elements with std::vetor<int> : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin - inicio) / CLOCKS_PER_SEC) << std::endl;
*/
%>

void	PmergeMe::mergeInsertSortVector(void) <%
	
	std::vector<int>::iterator it = a.begin();
	for(; it != a.end(); it++) <%
		if (it != a.end()) <%
			std::vector<int>::iterator it1 = it;
			it1++;

		std::cout << *it << "  " << *it1 <<  std::endl;
		%>
	%>
%>

void PmergeMe::print(void)<%
	clock_t inicio = clock();
	std::sort(a.begin(), a.end());
	clock_t fin = clock();

	clock_t inicio1 = clock();
	b.sort();
	clock_t fin1 = clock();
	printData(a.begin(), a.end(), "before");
	printData(a.begin(), a.end(), "after ");
	std::cout << "Time to process a range of " << a.size() << " elements with std::vetor<int> : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin - inicio) / CLOCKS_PER_SEC) << std::endl;
	std::cout << "Time to process a range of " << b.size() << " elements with std::list<int> : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin1 - inicio1) / CLOCKS_PER_SEC) << std::endl;
%>

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
