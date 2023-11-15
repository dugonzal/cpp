/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:13:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 13:30:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/convert.hpp"

convert::convert(void): input(""), c(0), d(0), f(0), dd(0) <% %>

convert::~convert(void) <% %>
		
convert::convert(const convert &other) <%
	if (&other == this)
		return ;
	*this = other;
%>
convert::convert(const std::string &_input): input(_input) <%
// si la cadena es mayor a 1, no puede ser un caracter

  if (input.length() == 1) <%
	  c = input[0] ;
	  d = static_cast<int>(c);
	  f = static_cast<float>(c);
	  dd = static_cast<double>(c);
  %>
  else if (input.length() > 1)
	  convertNumber(input);
  else
	throw (std::runtime_error("error inesperado no hay cadena"));
%>

void convert::convertNumber(std::string input) <%
  std::cout << input << std::endl;

%>
		
convert &convert::operator=(const convert &other) <%

	if (&other == this)
	  return (*this);
	input = other.input;
	d = other.d;
	c = other.c;
	dd = other.dd;
	f = other.f;
	return (*this);
%>
