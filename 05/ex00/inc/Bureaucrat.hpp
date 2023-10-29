/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:40:26 by dugonzal          #+#    #+#             */
/*   Updated: 2023/10/29 21:36:02 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "../inc/Bureaucrat.hpp"

#include <iostream>
#include <exception>

class Bureaucrat <%
	
	private:
		std::string name;
		unsigned int grade;
	
	public:
		Bureaucrat( void);
		~Bureaucrat( void);
		Bureaucrat(const std::string &other, int g);
		Bureaucrat &operator=(Bureaucrat const &other);	
		int getGrade(void) ;  
		std::string getName(void);
		void decrement(void);
		void increment(void);
		void ex(int g);
	public:
	  class GradeTooHighException: public std::exception  <%
		public:
		  virtual const char *what() const throw();
	  %>;
	  class GradeTooLowException: public std::exception  <%
		public:
		  virtual const char *what() const throw();
	  %>;
%>;

std::ostream &operator<<(std::ostream &os, Bureaucrat &other);
