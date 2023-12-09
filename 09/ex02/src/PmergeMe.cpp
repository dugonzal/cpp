/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/09 10:36:58 by Dugonzal         ###   ########.fr       */
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

template <typename iter>
bool	PmergeMe::isSorted(const iter &begin, const iter &end) const <%
    return (std::adjacent_find(begin, end, std::greater<typename iter::value_type>()) == end);
%>

PmergeMe::PmergeMe(const char **av) <%

	for (int i = 0; av[i] ; i++) <%
		
		parser(av[i], strlen(av[i]));
		long int tmp = atof(av[i]);
		if (tmp > INT_MAX)
			throw std::out_of_range("Error");
		a.push_back(tmp);
		b.push_back(tmp);
	%>
	
	if (a.size() < 2)
		throw std::runtime_error("Error");
	else if (isSorted(a.begin(), a.end()))
		exit(0);
%>

template <typename T>
void	PmergeMe::mergeInsertSort(T &arr) <%
	
	if (arr.size() < 2)
		return;

    typename T::iterator middle = arr.begin() + arr.size() / 2;
    T left(arr.begin(), middle);
    T right(middle, arr.end());

    mergeInsertSort(left);
    mergeInsertSort(right);
	
	std::merge(left.begin(), left.end(), right.begin(), right.end(), arr.begin());
%>

void	PmergeMe::print(void) <%
	
	printData(a.begin(), a.end(), "before");
	
	clock_t inicio = clock();
	mergeInsertSort(a);
	clock_t fin = clock();

	clock_t inicio1 = clock();
	mergeInsertSort(b);
	clock_t fin1 = clock();

	printData(a.begin(), a.end(), "after ");
	
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << a.size() << " elements with std::vector<int> : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin - inicio) / CLOCKS_PER_SEC) << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << b.size() << " elements with std::deque<int>  : " \
	  << std::fixed << std::setprecision(6) << (static_cast<float>(fin1 - inicio1) / CLOCKS_PER_SEC) << std::endl;
%>

template <typename iter>
void	PmergeMe::printData(const iter &begin, const iter &end, const std::string &message) const <%
	
	if (!message.empty())
		std::cout << message << " : ";
	
	for (iter it = begin; it != end; it++)
		std::cout << *it << " ";
	
	std::cout << std::endl;
%>

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) <%
	
	a = other.a;
	b = other.b;
	
	return (*this);
%>
