/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 15:00:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <algorithm>
# include <iostream>
# include <vector>
# include <stdexcept>

# include <algorithm>

template <typename T>
void easyfind(const T& container, int value) <%
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		if (*it == value) <%
			std::cout << "value found in container: " << *it << " == " << value << std::endl;
			return;
		%>
	
	throw std::out_of_range("value no found  in container");
	//throw std::runtime_error("value no found  in container");
%>

