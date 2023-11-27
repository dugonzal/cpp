/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:28:02 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/27 19:02:48 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <algorithm>
# include <iostream>
# include <vector>
# include <stdexcept>
# include <list>
# include <stack>
# include <algorithm>
# include <typeinfo>
# include <algorithm>

template <typename T>
void easyfind(const T &container, const int &value) <%

	typename T::const_iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		std::cout << "value found in container: " << std::endl;
	else
		throw std::out_of_range("value no found  in container");
%>

