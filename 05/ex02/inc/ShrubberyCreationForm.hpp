/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:45 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/10 10:59:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"
#include "./Bureaucrat.hpp"
class ShrubberyCreationForm: public AForm <%
	
	private:
		std::string target; // el nombre del archivo a escribir
	
	public:
	  ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const std::string _target);
	  ~ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const ShrubberyCreationForm &other);
	  const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	  /*void e(const Bureaucrat &other) const <%

		  std::cout << other << std::endl;
	  %>;*/
	  //¿deberia incluir tambien las exceptiones a las clases de formularios? o las heredo?
%>;
