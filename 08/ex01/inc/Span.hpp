/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 22:45:04 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <list>
# include <deque>
# include <typeinfo>
# include <stdexcept>
# include <algorithm>
# include <limits>
# include <cmath>
//template < class T >
template < class T = class TT >

class Span <%
	
	private:
		mutable T					array;
		mutable unsigned int			n;
	
	public:
		Span<T>(void);
		Span<T>(unsigned int _n);
		~Span<T>(void);
		Span<T>(const Span<T> &other);
		Span<T> &operator=(const Span<T> &other);
		void			addNumber(unsigned int o) const ;
		void			addNumber(const T &other) const ;
		void			show(void) const ;
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
%>;
