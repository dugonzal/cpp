/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 18:25:39 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"

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
	  // como el nombre es constante no puedo copiarlo
	grade = other.grade;
	return (*this);
%>

const char *Bureaucrat::GradeTooHighException::what(void) const throw() <% return ("highest possible grade"); %>

const char *Bureaucrat::GradeTooLowException::what(void) const throw() <% return ("lowest possible grade"); %>

int Bureaucrat::getGrade(void) const <% return (grade); %>

const std::string Bureaucrat::getName(void) const<% return (name); %>

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

void Bureaucrat::signForm(const AForm &other) const<%
	  if (other.getIsSigned())
		std::cout << name << " signed " << other.getName() << std::endl;
	  else 
		std::cout << name << " couldn’t sign " << other.getName() << std::endl;
%>

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other) <%
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return (os);
%>

void Bureaucrat::executeForm(const AForm &other) const <%
  try <%
	  other.execute(*this);
	  std::cout << std::endl << name << " executed the form " \
		<< other.getName() << "." << std::endl;
  %>
  catch (const AForm::GradeTooLowException &e) <%
	 std::cerr << "Error: " << e.what() << std::endl;
  %>
  catch (const AForm::UnverifiedException &e) <%
	 std::cerr << "Error: " << e.what() << std::endl;
  %>
%>
