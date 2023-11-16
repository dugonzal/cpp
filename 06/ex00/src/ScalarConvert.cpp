/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:13:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 21:29:26 by Dugonzal         ###   ########.fr       */
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

void ScalarConvert::number(const char *tmp) <%
	d =  static_cast<int>(std::atoi(tmp));
	f =  static_cast<float>(std::atoi(tmp));
	dd = static_cast<double>(std::atoi(tmp));
%>

void ScalarConvert::ascii(void) <%
	 d =  static_cast<int>(c);
	 f =  static_cast<float>(c);
	 dd = static_cast<double>(c);
%>

void ScalarConvert::convertAndPrint(void) <%
	if (input.length() < 1)
		throw (std::runtime_error("error inesperado no hay cadena"));
	else if (input.length() == 1)  <%
		c =  input[0];
		if (std::isdigit(c))
			number(&c);
		else
			ascii();
	%>
	else if (input.length() > 1)
	    convertNumber(input);
	print();
%>

void ScalarConvert::print(void) const <%
	std::cout << std::fixed << std::setprecision(1);
 
	std::cout << "char      ";
	if (c == '0' && input.length() == 1)
	    std::cout << "Non displayable" << std::endl;
	else if (!std::isprint(c) && input.length() > 1)
	    std::cout << "impossible" << std::endl;
	else  
	    std::cout << c << std::endl;
	std::cout << "integer   ";
	if (std::isnan(dd) || std::isinf(dd) || d < std::numeric_limits<int>::min() \
	    || d > std::numeric_limits<int>::max()) 
	   std::cout << "impossible" << std::endl;
	else
	    std::cout << d << std::endl;
	std::cout << "float     " << f << "f" << std::endl;
	std::cout << "double    " << dd << std::endl;
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
