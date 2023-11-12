/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:40:26 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 18:49:06 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <cstdlib>
#include <exception>

class Bureaucrat <%
	
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat( void);
		~Bureaucrat( void);
		Bureaucrat(const std::string &other, int g);
		Bureaucrat &operator=(Bureaucrat const &other);
		int getGrade(void) ;
		const std::string getName(void) const;
		void decrement(void);
		void increment(void);
	
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
