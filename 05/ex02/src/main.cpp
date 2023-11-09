/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/09 11:59:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

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

AForm *_formularios(void) <%
	AForm *formularios = new AForm[10];

	for (int i = 0; i < 10; i++) <%
	  //std::cout << formularios[i] << std::endl;
	%>
	return (formularios);
%>

int main() <%
	 Bureaucrat *Animal = NULL;
	AForm *formularios = NULL;

	try <%
	  Animal = burocratas();
	  formularios = _formularios();
	  Bureaucrat test("bob", 3);
	  AForm a("test", 1, 3);

	  a.beSigned(test);
	  std::cout << a << std::endl << test << std::endl;
	  test.signForm(a);
	%>
	catch (const Bureaucrat::GradeTooLowException &e) <%
		std::cerr << e.what() << std::endl;
	%>	
	catch (const Bureaucrat::GradeTooHighException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	catch (const AForm::GradeTooHighException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	catch (const AForm::GradeTooLowException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	if (Animal != NULL)
		delete [] Animal;
	if (formularios != NULL)
		delete [] formularios;
	return 0;
%>
