/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:17:23 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 17:28:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): \
	AForm("PresidentialPardonForm", 25, 5), target("target") <% %>

PresidentialPardonForm::~PresidentialPardonForm(void) <% %>
	  
PresidentialPardonForm::PresidentialPardonForm(std::string _target): \
	AForm("PresidentialPardonForm", 25, 5), target(_target) <% %>
		
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), target(other.target) <% %>
		
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) <%
	if (this == &other)
		return (*this);

	target = other.target;
	return (*this);
%>

void 	PresidentialPardonForm::execute(const Bureaucrat &executor) const <%
	checkForm(executor, 5);
	
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
%>
