/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/08 21:29:16 by Dugonzal         ###   ########.fr       */
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
		std::cout << std::endl << std::endl;	
		std::cout << Animal[i] << std::endl;
	%>
	return (Animal);
%>

Form *_formularios(void) <%
	Form *formularios = new Form[10];

	for (int i = 0; i < 10; i++) <%
	  std::cout << formularios[i] << std::endl;
	%>
	return (formularios);
%>

int main() <%
	Bureaucrat *Animal = NULL;
	Form *formularios = NULL;

	try <%
	  Animal = burocratas();
	  formularios = _formularios();

	  std::cout << formularios[1] << std::endl;
	%>
	catch (const Bureaucrat::GradeTooLowException &e) <%
		if (Animal != NULL)
		  delete [] Animal;
		std::cerr << e.what() << std::endl;
	%>	
	catch (const Bureaucrat::GradeTooHighException &e) <%
		if (Animal != NULL)
		  delete [] Animal;
		std::cerr << e.what() << std::endl;
	%>

	if (Animal != NULL)
		delete [] Animal;
	return 0;
%>
