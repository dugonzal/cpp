/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/24 16:16:08 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>

template <class T>
class Span <%
	
	private:
	  /*mutable*/ std::vector<T>	array;
	  /*mutable*/ unsigned int		n;
	public:
	  Span<T>(void);
	  //Span(unsigned int _n);
	  //~Span(void);
	  //Span(const Span &other);
	  //Span &operator=(const Span &other);
%>;
