/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:49:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 15:54:03 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), target("<target>") <%%>

RobotomyRequestForm::~RobotomyRequestForm(void) <%%>

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): \
  AForm("RobotomyRequestForm", 72, 45), target(other.target)<%%>

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) <%
	if (this == &other)
		return (*this);
//	Aform::operator=(other);
	target = other.target;
	return (*this);
%>

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45) ,target(_target) <% %>

void RobotomyRequestForm::execute(const Bureaucrat &executor) const <%
	checkForm(executor, 45);
	// que quiere decir con el 50% de la veces, deberia usar algun tipo de random, no lo tengo claro

%>
