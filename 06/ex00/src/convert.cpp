/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:13:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/14 20:32:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/convert.hpp"

convert::convert(void): input("") <% %>

convert::~convert(void) <% std::cout << "dsd";%>
		
convert::convert(const convert &other) <%
	if (&other == this)
		return ;
	*this = other;
%>
convert::convert(const std::string &_input): input(_input) <%

  std::cout << input << std::endl;
%>
		
convert &convert::operator=(const convert &other) <%

	if (&other == this)
	  return (*this);
	input = other.input;
	return (*this);
%>
