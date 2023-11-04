/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/04 22:32:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

Form::~Form(void) <%%>

Form::Form(void) : name(""), isSigned(false), grade(42), sGrade(24) <%%>
//Form::Form(const Form &other): <%%>
/*
const Form &Form::operator=(const Form &other) <%
  
	if (this == &other)
	  return (*this);
	return (*this);
%>
*/

std::string Form::getName(void) <% return (name); %>

bool Form::getIsSigned(void) <% return (isSigned); %>

int Form::getGrade(void) <% return (grade); %>

int Form::getSgrade(void) <% return (sGrade); %>

const char *Form::GradeTooHighException::what() const throw() <% return ("eeee");  %>
