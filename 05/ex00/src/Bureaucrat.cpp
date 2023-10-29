/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/25 21:08:29 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void) <% %>

Bureaucrat::Bureaucrat(void): name("free for random"), grade(42) <% %>

Bureaucrat::Bureaucrat(const std::string &other, int g): name(other), grade(g) <%%>

//void Bureaucrat::getName(const std::string &n) const <% name = n; %>;

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) <% 
	
	if (this == &other)
	  return (*this);
	name = other.name;
	grade = other.grade;
	return (*this);
%>

const char *Bureaucrat::GradeTooHighException::what(void) const throw() <% return ("min hahah"); %>

int Bureaucrat::getGrade(void) <% return (grade); %>  
