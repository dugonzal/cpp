/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 23:18:32 by Dugonzal         ###   ########.fr       */
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

class Span <%
	
	private:
		mutable std::vector<int>		array;
		mutable unsigned int			n;
	
	public:
		Span(void);
		Span(unsigned int _n);
		~Span(void);
		Span(const Span &other);
		Span &operator=(const Span &other);
		void			addNumber(unsigned int o) const ;
		void			addNumber(const std::vector<int> &other) const ;
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
%>;
