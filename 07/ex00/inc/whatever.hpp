/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:52:00 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/17 12:38:09 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

template <typename Tn>
Tn &min(Tn &x, Tn &y) <%
  return (x < y ? x: y);
%>


template <typename Tu>
Tu &max(Tu &x, Tu &y) <%
  return (x > y ? x: y);
%>


