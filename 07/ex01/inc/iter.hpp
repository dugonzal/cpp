/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:51:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 18:44:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

template <typename Tn, class Fun>
void iter(Tn *array, size_t size, Fun f) <%
  for (size_t i = 0; i < size; i++)
	  f(array[i]);
%>
