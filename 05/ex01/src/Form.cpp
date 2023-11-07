/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/07 10:31:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::~Form(void) <% %>

Form::Form(void) : name("articulo 53"), isSigned(false), grade(42), sGrade(24) <% %>

Form::Form(const Form &other): name(other.name), isSigned(other.isSigned), grade(other.grade), sGrade(other.sGrade) <% %>

Form &Form::operator=(const Form &other) <%
	if (this == &other)
		return (*this);
	isSigned = other.isSigned;
	return (*this);
%>

// el grado de sign  y grado de ejecucion, cumplen las reglas de los burocratas 
Form::Form(const std::string _name, const int g, const int s): name(_name), isSigned(false), grade(g), sGrade(s) <%
	if (g < 1 || s < 1)
		throw (GradeTooLowException());
	else if (g > 150 || s > 150)
		throw GradeTooHighException();
%>

const std::string Form::getName(void) const <% return (name); %>

bool Form::getIsSigned(void) const <% return (isSigned); %>

int Form::getGrade(void) const <% return (grade); %>

int Form::getSgrade(void) const <% return (sGrade); %>

const char *Form::GradeTooHighException::what() const throw() <% return ("Grade too high");  %>

const char *Form::GradeTooLowException::what() const throw() <% return ("Grade too low");  %>
