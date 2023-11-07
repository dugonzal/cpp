/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/07 19:10:21 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

int main() <%
	Bureaucrat *Animal = NULL;
	Form a;
	
	Form z(a);

	z = a;
	std::cout << z.getName() << std::endl;
	std::cout << z.getIsSigned() << std::endl ;
	Bureaucrat tmpp("bob", 150);
	
	Form p("hola mundo", 150, 2);

	p.beSigned(tmpp);
	try <%
		Form p("hola mundo", 150, 2);
		std::cout << "free for random" << std::endl;
		Bureaucrat tmp2("bob", 150);
		std::cout << "[>>inicio <<]\n" << tmp2 << std::endl;
		tmp2.decrement();
		std::cout << std::endl <<" *  * " << std::endl << tmp2 << "*   *" << std::endl;
		
		Bureaucrat *Animal = new Bureaucrat[10];
		for (int i = 0; i < 10; i++) <%

			Animal[i].increment();
			std::cout << Animal[i] << std::endl;
			Animal[i].decrement();
			for (int t = 0; t < 10; t++)	
				  Animal[i].increment();
			std::cout << Animal[i] << std::endl;
			std::cout << std::endl << std::endl;	
		%>
		tmp2.decrement();
		std::cout << tmp2 << std::endl;
		
		tmp2.increment();
		std::cout << tmp2 << std::endl;
		
		tmp2.decrement();
		std::cout << tmp2 << std::endl;
		
		tmp2.increment();
		std::cout << tmp2 << std::endl;
		
		Bureaucrat tmp(tmp2);

		std::cout << tmp << std::endl;
		delete [] Animal;
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
	catch (const Form::GradeTooHighException &e) <%
	
		std::cerr << e.a() << std::endl;

  %>
  catch (const Form::GradeTooLowException &e) <%
		std::cerr << e.what() << std::endl;
  %>
  
	if (Animal != NULL)
		delete [] Animal;
	return 0;
%>
