/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:39 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 13:14:32 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 37), target("target") <% %>

ShrubberyCreationForm::~ShrubberyCreationForm(void) <% %>

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): \
	AForm("ShrubberyCreationForm", 145, 37), target(other.target) <% %>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target): \
	AForm("ShrubberyCreationForm", 145, 37), target(_target) <% %>

std::string ShrubberyCreationForm::getTarget(void) const <% return (target); %>

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) <%

	if (this == &other)
	  return (*this);
	target = other.target;
	//*this = other; no se si sea lo mismo para esta clase
	//AForm::operator=(other); // no hace falta pero por practicar xd
	return(*this);
%>

void treePrint(std::ofstream &file) <%

  file << "                                          " << std::endl \
  <<"                      O                         " << std::endl \
  <<"                     ***                        " << std::endl \
  <<"                    **O**                       " << std::endl \
  <<"                   *******                      " << std::endl \
  <<"                  *********                     " << std::endl \
  <<"                 ***********                    " << std::endl \
  <<"                  ******o**                     " << std::endl \
  <<"                 ***********                    " << std::endl \
  <<"                ****o********                   " << std::endl \
  <<"               ***************                  " << std::endl \
  <<"              ****o***o********                 " << std::endl \
  <<"             *******************                " << std::endl \
  <<"           ***********************              " << std::endl \
  <<"            ****************o****               " << std::endl \
  <<"           **O********************              " << std::endl \
  <<"          ***********o********O****             " << std::endl \
  <<"        *****************************           " << std::endl \
  <<"         ***************************            " << std::endl \
  <<"        *************o***************           " << std::endl \
  <<"       ***********o*******************          " << std::endl \
  <<"      **************************O******         " << std::endl \
  <<"     ***o******************O************        " << std::endl \
  <<"   ***o***********o****************o******      " << std::endl \
  <<"                     ###                        " << std::endl \
  <<"                    ###                         " << std::endl \
  <<"                   ###                          " << std::endl \
  <<"               ###########                      " << std::endl \
  <<"              ###########                       " << std::endl ;

  file.close();
%>

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const<%

	checkForm(executor);
	std::ofstream file(getTarget().append("_shrubbery").data());
	if (!file)
		std::cerr << "error en la apertura del archivo" << std::endl;

	treePrint(file);
	file.close();
%>
