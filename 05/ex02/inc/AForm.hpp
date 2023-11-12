/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 14:45:59 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <cstdlib>
# include <cstring>
# include <string>
# include <iostream>
# include <fstream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm <%
	
	private:
		const std::string name;
		bool isSigned;
		const int grade;
		const int sGrade;

	public:
		AForm(void);
		virtual ~AForm(void) = 0; // con esto creo una clase abstracta pero hay mas formas
		AForm(const AForm &other);
		const std::string getName(void) const;
		AForm(const std::string _name, const int g, const int s);
		bool getIsSigned(void) const;
		int getGrade(void) const;
		int getSgrade(void) const;
		AForm &operator=(const AForm &other);
		void beSigned(const Bureaucrat &other);
		void setIsSigned(bool v);
		void checkForm(const Bureaucrat &other, int _grade) const;
		virtual void execute(const Bureaucrat &executor) const = 0;
	
	public:
		class GradeTooHighException: public std::exception <%
			
			  public:
				  virtual const char *what() const throw();
		%>;
		class GradeTooLowException: public std::exception <%
			
			  public:
				   virtual const char *what() const throw();
		%>;
		class UnverifiedException: public std::exception <%
			
			  public:
				  virtual const char *what() const throw();
		%>;
%>;

std::ostream &operator<<(std::ostream &os, const AForm &other);
