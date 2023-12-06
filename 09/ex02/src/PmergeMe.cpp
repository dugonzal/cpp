/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:04:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 19:18:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe(void) <% %>

PmergeMe::~PmergeMe(void) <% %>

PmergeMe::PmergeMe(const char **av) <%

	for (int i = 0; av[i] != 0; i++)
		std::cout << av[i] << std::endl;
%>

PmergeMe::PmergeMe(const PmergeMe &other) <%

	*this = other;

%>

PmergeMe &PmergeMe::operator=(const PmergeMe &other) <%
	
	if (&other == this)
		return (*this);
	*this = other;
	return (*this);
%>

