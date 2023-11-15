/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:13:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 18:31:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ScalarConvert.hpp"

ScalarConvert::ScalarConvert(void): input(""), c(0), d(0), f(0), dd(0) <% %>

ScalarConvert::~ScalarConvert(void) <% %>
		
ScalarConvert::ScalarConvert(const ScalarConvert &other) <%
	if (&other == this)
		return ;
	*this = other;
%>

ScalarConvert::ScalarConvert(const std::string &_input): input(_input) <% %>

void ScalarConvert::convertNumber(const std::string &_input) <%
  char *ptr;
  dd = std::strtod(_input.data(), &ptr);

  if (ptr == _input.data() && !dd)
	 throw std::runtime_error("error el input es una cadena no valida");
	
  c = static_cast<char>(dd);
  d = static_cast<int>(dd);
  f = static_cast<float>(dd);
%>

void ScalarConvert::convertAndPrint(void) <%
	if (input.length() < 1)
		throw (std::runtime_error("error inesperado no hay cadena"));
	else if (input.length() == 1) <%
	    c =  static_cast<char>(input[0]);
		d =  static_cast<int>((c));
		f =  static_cast<float>(c);
		dd = static_cast<double>(c);
	%>
	else if (input.length() > 1)
	    convertNumber(input);
	print();
%>

void ScalarConvert::print(void) const <%
  std::cout << std::fixed << std::setprecision(1);
  std::cout << "char    " << c << std::endl;
  std::cout << "integer " << d << std::endl;
  std::cout << "float   " << f << "f" << std::endl;
  std::cout << "double  " << dd << std::endl;
	

%>

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &other) <%
	if (&other == this)
		return (*this);
	
	input = other.input;
	d = other.d;
	c = other.c;
	dd = other.dd;
	f = other.f;
	return (*this);
%>
