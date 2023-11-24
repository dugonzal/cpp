/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:52:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/24 15:29:14 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

template <typename T>
Span<T>::Span(void): array(new std::vector<T>), n(0) <%%>
template <typename T>
Span<T>::Span(unsigned int _n): array(new std::vector<T>), n(_n) <% %>
	  
template <typename T>
Span<T>::~Span(void) <% delete [] array; %>

	  //Span(const Span &other);
	  //Span &operator=(const Span &other);
