/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/10/29 21:40:28 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main() <%
	try <%
		std::cout << "free for random" << std::endl;
		Bureaucrat tmp2("bob", 150);
		std::cout << "[>>inicio <<]\n" << tmp2 << std::endl;
		tmp2.decrement();
		std::cout << tmp2 << std::endl;
		
		tmp2.decrement();
		std::cout << tmp2 << std::endl;
		
		tmp2.increment();
		std::cout << tmp2 << std::endl;
		
		tmp2.decrement();
		std::cout << tmp2 << std::endl;
		
		tmp2.increment();
		std::cout << tmp2 << std::endl;
	
	%>
	catch (const Bureaucrat::GradeTooLowException &e) <%
		std::cerr << "Excepción capturada: " << e.what() << std::endl;
	%>	
	catch (const Bureaucrat::GradeTooHighException &e) <%
		std::cerr << "Excepción capturada: " << e.what() << std::endl;
	%>
	return 0;
%>
