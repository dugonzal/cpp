/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/09 11:00:22 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <cstdlib>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form <%
	
	private:
		const std::string name;
		bool isSigned;
		const int grade;
		const int sGrade;

	public:
		Form(void);
		~Form(void);
		Form(const Form &other);
		const std::string getName(void) const;
		Form(const std::string _name, const int g, const int s);
		// no puedo retornarlo constante excepcion de getName
		/*const*/bool getIsSigned(void) const;
		int getGrade(void) const;
		int getSgrade(void) const;
		Form &operator=(const Form &other);
		void beSigned(const Bureaucrat &other);
		void setIsSigned(bool v);
	
	public:
		class GradeTooHighException: public std::exception <%
			
			  public:
				  virtual const char *what() const throw();
		%>;
		class GradeTooLowException: public std::exception <%
			
			  public:
				   virtual const char *what() const throw();
		%>;
%>;

std::ostream &operator<<(std::ostream &os, const Form &other);
