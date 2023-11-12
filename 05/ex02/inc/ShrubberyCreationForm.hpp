/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:45 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 14:42:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm <%
	
	private:
		std::string target; // el nombre del archivo a escribir
	
	public:
	  ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const std::string _target);
	  //constructor con valor predeterminado
	  //ShrubberyCreationForm(const std::string _target = "target");
	  ~ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const ShrubberyCreationForm &other);
	  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	  virtual void execute(const Bureaucrat &other) const;
	  //¿deberia ser virtual para mejorar la lectura del codigo?
	  //virtual void execute(const Bureaucrat &other) const; 
	  void treePrint(std::ofstream &other) const;
%>;
