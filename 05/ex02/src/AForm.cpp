/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 13:16:20 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::~AForm(void) <% %>

AForm::AForm(void): name("articulo 53"), isSigned(false), grade(42), sGrade(24) <% %>

AForm::AForm(const AForm &other): name(other.name), isSigned(other.isSigned), grade(other.grade), sGrade(other.sGrade) <% %>

AForm &AForm::operator=(const AForm &other) <%
	// no puedo crear este operador porque los valores de la clase son constantes y isSigned no tendria sentido copiarlo
  	if (this == &other)
		return (*this);
	//(void)other;
	return (*this);
%>

// el grado de sign  y grado de ejecucion, cumplen las reglas de los burocratas 
AForm::AForm(const std::string _name, const int g, const int s): name(_name), isSigned(false), grade(g), sGrade(s) <%
	if (g < 1 || s < 1)
		throw (GradeTooLowException());
	else if (g > 150 || s > 150)
		throw GradeTooHighException();
%>

void AForm::beSigned(const Bureaucrat &other) <%
	if (other.getGrade() <= grade)
			isSigned = true;
	else // lee mejor xd
		throw (GradeTooLowException());
		//throw (Form::GradeTooLowException());
%>

const std::string AForm::getName(void) const <% return (name); %>

bool AForm::getIsSigned(void) const <% return (isSigned); %>

int AForm::getGrade(void) const <% return (grade); %>

int AForm::getSgrade(void) const <% return (sGrade); %>

const char *AForm::GradeTooHighException::what() const throw() <% return ("Grade too high"); %>

const char *AForm::UnverifiedException::what() const throw() <% return ("The bureaucrat has not signed, signed required."); %>

const char *AForm::GradeTooLowException::what() const throw() <% return ("Grade too low"); %>

void AForm::checkForm(const Bureaucrat &other) const<%
	if (other.getGrade() > 37)
		throw (GradeTooLowException());
	else if (!getIsSigned())
		throw UnverifiedException(); // creo una exception para cuando no esta firmado
%>

std::ostream &operator<<(std::ostream &os, const AForm &other) <%
	return (os << other.getName() << ", Form grade " << other.getGrade() << ", " << \
	" degree of execution " << other.getSgrade() << " ¿signed? " << other.getIsSigned() << " ." << std::endl);
	//return (os);
%>

