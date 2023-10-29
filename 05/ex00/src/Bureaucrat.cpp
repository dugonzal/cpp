/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/29 21:50:37 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void) <% %>

Bureaucrat::Bureaucrat(void): name("free for random"), grade(42) <% %>

Bureaucrat::Bureaucrat(const std::string &other, int g): name(other) <%
	if (g < 1)
	  throw GradeTooLowException();
	else if (g > 150)
	  throw GradeTooHighException();
	grade = g;
%>

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) <% 
	
	if (this == &other)
	  return (*this);
	name = other.name;
	grade = other.grade;
	return (*this);
%>

const char *Bureaucrat::GradeTooHighException::what(void) const throw() <% return ("min hahah"); %>

const char *Bureaucrat::GradeTooLowException::what(void) const throw() <% return (" hahah"); %>

int Bureaucrat::getGrade(void) <% return (grade); %>

std::string Bureaucrat::getName(void) <% return (name); %>

void Bureaucrat::increment(void) <% 
	if (grade > 149)
	  throw GradeTooHighException();
	grade++;
%>

  void Bureaucrat::decrement(void) <% 
	if (grade < 1)
	  throw GradeTooLowException();
	grade--;
%>

std::ostream &operator<<(std::ostream &os, Bureaucrat &other) <%
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return (os);
%>
