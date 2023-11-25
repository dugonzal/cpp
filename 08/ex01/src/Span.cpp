/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:52:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/25 14:37:38 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Span.hpp"

template <typename T>
Span<T>::Span(void): n(0) <% %>

template <typename T>
Span<T>::Span(unsigned int _n): n(_n) <% %>
	  
template <typename T>
Span<T>::~Span(void) <% %>

template <typename T>
Span<T>::Span(const Span<T> &other): n(other.n) <% %>
	 
template <typename T>
Span<T> &Span<T>::operator=(const Span<T> &other) <% *this = other; %>
