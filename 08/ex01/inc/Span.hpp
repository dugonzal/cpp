/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/26 20:00:20 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>
# include <cstdlib>
# include <ctime>
# include <list>
# include <deque>
# include  <stdexcept>

template < class T >
//template < class T /*= class TT*/ >

class Span <%
	
	private:
		mutable T					array;
		const unsigned int			n;
	
	public:
		Span<T>(void);
		Span<T>(unsigned int _n);
		~Span<T>(void);
		Span<T>(const Span<T> &other);
		Span<T> &operator=(const Span<T> &other);
		void	addNumber(unsigned int o) <% 
				if (array.size() > n)
				  throw (std::runtime_error("fuerda de rango bye"));
				array.push_back(o); 
				std::cout << array.size() << std::endl;
		%>

%>;
