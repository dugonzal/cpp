/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/23 14:42:43 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <algorithm>
# include <iostream>
# include <vector>

#include <algorithm>

template <typename T, typename f>
void easyfind(const T& container, const f& value) <%
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		if (*it == value) <%
			std::cout << "ok" << std::endl;
			return;
		%>
	std::cout << "ko" << std::endl;
%>

