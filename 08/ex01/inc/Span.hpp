/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 18:30:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <list>
# include <deque>
# include <stdexcept>
# include <algorithm>
//template < class T >
template < class T = class TT >

class Span <%
	
	private:
		mutable std::vector<T>			array;
		mutable unsigned int			n;
	
	public:
		Span<T>(void);
		Span<T>(unsigned int _n);
		~Span<T>(void);
		Span<T>(const Span<T> &other);
		Span<T> &operator=(const Span<T> &other);
		void	addNumber(unsigned int o) const ;
		//void	addNumber(const T &other) ;
		void	show(void);
%>;
