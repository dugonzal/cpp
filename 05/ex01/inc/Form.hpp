/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/04 22:33:57 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form <%
	private:
		const std::string name;
		bool isSigned;
		const int grade;
		const int sGrade;

	public:
		Form(void);
		~Form(void);
		std::string getName(void);
		bool getIsSigned(void);
		int getGrade(void);
		int getSgrade(void);
	public:
		class GradeTooHighException: public std::exception <%
			public:
				  virtual const char *what() const throw();
		%>;
%>;
