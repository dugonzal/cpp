/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:00:08 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 20:30:39 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern(void) <%%>	

Intern::~Intern(void) <%%>
	  
Intern::Intern(const Intern &other) <% *this = other; %>

Intern Intern::operator=(const Intern &other) <% return (other); %>


AForm *Intern::makeForm(const std::string &s1, const std::string &s2) <%
	
	std::cout << s1 << "  " << s2 << std::endl;
	return (new RobotomyRequestForm);
%>
