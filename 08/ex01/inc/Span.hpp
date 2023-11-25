/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/25 14:46:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>

template < class T = class TT >

class Span <%
	
	private:
		mutable std::vector<T>	array;
		mutable unsigned int		n;
	
	public:
		Span<T>(void);
		Span<T>(unsigned int _n);
		~Span<T>(void);
		Span<T>(const Span<T> &other);
		Span<T> &operator=(const Span<T> &other);

%>;
