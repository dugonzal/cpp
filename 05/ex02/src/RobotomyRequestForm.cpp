/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:49:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 19:05:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), target("target") <% %>

RobotomyRequestForm::~RobotomyRequestForm(void) <% %>

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): \
  AForm(other), target(other.target) <% %>

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) <%
	if (this == &other)
		return (*this);
	target = other.target;
	return (*this);
%>

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45), target(_target) <% %>

void RobotomyRequestForm::execute(const Bureaucrat &executor) const <%
	checkForm(executor, 45);
	
	std::srand(std::time(0));
	if ((std::rand() % 2))
        std::cout << "Drilling noises... Robotomy successful on target " << target << "!" << std::endl;
	else 
        std::cout << "Drilling noises... Robotomy failed on target " << target << "." << std::endl;
%>
