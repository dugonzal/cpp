/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:51:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 19:07:40 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

template <typename T, typename F>
void iter(T *array, size_t size, F function) <%
  for (size_t i = 0; i < size; i++)
	  function(array[i]);
%>
