/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:00:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/13 15:43:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern(void) <%%>	

Intern::~Intern(void) <%%>
	  
Intern::Intern(const Intern &other) <% *this = other; %>

Intern Intern::operator=(const Intern &other) <% return (other); %>

AForm *Intern::cloneAForm(const std::string &name, int i)<%
	switch (i) <%
		case (0):
			return (new ShrubberyCreationForm(name));
			break;
		case (1):
			return (new RobotomyRequestForm(name));
			break;
		case (2):
			return (new PresidentialPardonForm(name));
			break;
		default:
		  return (NULL);
	%>
%>

AForm *Intern::makeForm(const std::string &s1, const std::string &s2)  <%
	if (s2.empty() || s1.empty())
	  	throw (std::runtime_error("s1 or s2 empty"));

	std::string list[] = <% "ShrubberyCreationForm" 
	,"RobotomyRequestForm", "PresidentialPardonForm" %>;

	for (int i = 0; i < 2; i++)
		if (!s1.compare(list[i])) <%
			AForm *tmp;
			
			tmp = cloneAForm(list[i], i);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return (tmp);
		%>
	throw (std::runtime_error("compare is false"));
	return (NULL);
%>
