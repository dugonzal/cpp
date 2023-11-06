/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/06 15:29:41 by Dugonzal         ###   ########.fr       */
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

const std::string Form::getName(void) const <% return (name); %>

bool Form::getIsSigned(void) const <% return (isSigned); %>

int Form::getGrade(void) const <% return (grade); %>

int Form::getSgrade(void) const <% return (sGrade); %>

const char *Form::GradeTooHighException::what() const throw() <% return ("Grade too high");  %>

const char *Form::GradeTooLowException::what() const throw() <% return ("Grade too low");  %>
