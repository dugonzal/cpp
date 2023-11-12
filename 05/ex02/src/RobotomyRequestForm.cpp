/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:49:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/11 13:26:08 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), target("<target>") <%%>

RobotomyRequestForm::~RobotomyRequestForm(void) <%%>

/*
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): <%
  target = other.target;
  //Aform::operator=(other);
  *this = other;
%>
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) <%

	if (this == &other)
		return (*this);
//	Aform::operator=(other);
	target = other.target;
	return (*this);
%>
*/
//RobotomyRequestForm::RobotomyRequestForm(std::string _target): Aform("RobotomyRequestForm", 72, 45), target(_target) <% %>
