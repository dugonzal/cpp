/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:40:26 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 17:37:36 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <exception>

# include "AForm.hpp"

class AForm;

class Bureaucrat <%
	
	private:
		const	std::string name;
		int		grade;

	public:
		Bureaucrat( void);
		~Bureaucrat( void);
		Bureaucrat(const std::string &other, int g);
		Bureaucrat &operator=(Bureaucrat const &other);
		int getGrade(void) const;
		const std::string getName(void) const;
		void decrement(void);
		void increment(void);
		void signForm(const AForm &other)const;	
		void executeForm(const AForm &other) const;	
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);
