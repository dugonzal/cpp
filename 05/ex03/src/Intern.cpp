/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:00:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/13 10:46:03 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern(void) <%%>	

Intern::~Intern(void) <%%>
	  
Intern::Intern(const Intern &other) <% *this = other; %>

Intern Intern::operator=(const Intern &other) <% return (other); %>

const char *Intern::ErrorExecption::what(void) const throw() <% return ("error inexperado");  %>

AForm *Intern::makeForm(const std::string &s1, const std::string &s2) <%
	
	std::cout << s1 << "  " << s2 << std::endl;
	if (s2.empty() || s1.empty())
		throw (ErrorExecption());
	std::string list[2];

  list[0] =  "ShrubberyCreationForm";
  list[1] = "RobotomyRequestForm";
  list[2] = "PresidentialPardonForm";

	for (int index = 0; index < 2; index++) <%
		std::cout << list[index] << std::endl;
	%>
	return (new RobotomyRequestForm(s2));
%>
