/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:45 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 14:17:34 by Dugonzal         ###   ########.fr       */
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
	  ~ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const ShrubberyCreationForm &other);
	  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	  void execute(const Bureaucrat &other) const; //cuando tenemos
	  void treePrint(std::ofstream &other) const;
%>;
