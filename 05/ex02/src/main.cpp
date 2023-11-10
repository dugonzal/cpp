/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/10 11:41:11 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/AForm.hpp"

Bureaucrat *burocratas(void) <%
	Bureaucrat *Animal = new Bureaucrat[10];

	for (int i = 0; i < 10; i++) <%

		Animal[i].increment();
		Animal[i].decrement();
		for (int t = 0; t < 10; t++)	
			Animal[i].increment();
		//std::cout << std::endl << std::endl;	
		//std::cout << Animal[i] << std::endl;
	%>
	return (Animal);
%>

int main() <%
	//Bureaucrat *Animal = NULL;
	ShrubberyCreationForm  *a  = NULL;

	try <%
		a = new ShrubberyCreationForm[10]; 
		Bureaucrat p("bnob", 3);	
		for (int i = 0; i < 10; i++) <%
			std::cout << a[i] << std::endl;
			a[i].execute(p);
		%>
	//if (a != NULL)
	 // delete [] a;
	%>
	catch (const Bureaucrat::GradeTooLowException &e) <%
		std::cerr << e.what() << std::endl;
	%>	
	catch (const Bureaucrat::GradeTooHighException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	catch (const ShrubberyCreationForm::GradeTooHighException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	catch (const ShrubberyCreationForm::GradeTooLowException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	if (a != NULL)
	  delete [] a;
	return 0;
%>
