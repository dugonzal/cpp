/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:39 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 11:43:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 37), target("<target>") <% %>

ShrubberyCreationForm::~ShrubberyCreationForm(void) <% %>

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): \
	AForm("ShrubberyCreationForm", 145, 37), target(other.target) <% %>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target): \
	AForm("ShrubberyCreationForm", 145, 37), target(_target) <% %>

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) <%

	if (this == &other)
	  return (*this);
	target = other.target;
	//*this = other; no se si sea lo mismo para esta clase
	//AForm::operator=(other); // no hace falta pero por practicar xd
	return(*this);
%>

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const<%
	
	if (getIsSigned() || executor.getGrade() > 37)
		throw (AForm::GradeTooHighException());// agregar la excepcion adecuada
	
	std::cout << target << std::endl;
	std::ofstream file(strcat((char *)target.data(), "_shrubbery"));

	if (!file)
		std::cerr << "error en la apertura del archivo" << std::endl;

	file << "hola mundo";
	file.close();
%>
