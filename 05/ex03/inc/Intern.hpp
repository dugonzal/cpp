/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:59:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:09 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern <%
	private:
	  AForm *cloneAForm(const std::string &name, int i);
	public:
	  Intern(void);	
	  ~Intern(void);	
	  Intern(const Intern &other);	
	  Intern operator=(const Intern &other);
	  AForm *makeForm(const std::string &s1, const std::string &s2) ;
%>;
