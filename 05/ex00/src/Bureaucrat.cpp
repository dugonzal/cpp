/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 18:49:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void) <% %>

Bureaucrat::Bureaucrat(void): name("free for random"), grade(42) <% %>

Bureaucrat::Bureaucrat(const std::string &other, int g): name(other), grade(g) <%
	if (g < 1)
	  throw GradeTooHighException();
	else if (g > 150)
	  throw GradeTooLowException();
%>

void Bureaucrat::increment(void) <% 
	if (grade < 2)
	  throw GradeTooLowException();
	grade--;
%>

void Bureaucrat::decrement(void) <% 
	if (grade > 149)
	  throw GradeTooHighException();
	grade++;
%>

const char *Bureaucrat::GradeTooHighException::what(void) const throw() <% return ("highest possible grade"); %>

const char *Bureaucrat::GradeTooLowException::what(void) const throw() <% return ("lowest possible grade"); %>

int Bureaucrat::getGrade(void) <% return (grade); %>

const std::string Bureaucrat::getName(void) const <% return (name); %>

std::ostream &operator<<(std::ostream &os, Bureaucrat &other) <%
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return (os);
%>
