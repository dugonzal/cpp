/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/13 10:46:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"
# include "../inc/ShrubberyCreationForm.hpp"
# include "../inc/RobotomyRequestForm.hpp"
# include "../inc/PresidentialPardonForm.hpp"
# include "../inc/Intern.hpp"

int main() <%
		  AForm *rrf;
	try <%
		 Intern someRandomIntern;
	  
		rrf = someRandomIntern.makeForm("robotomy request", "perro");
		if (rrf == NULL)
			return (0);
		std::cout << rrf[0].getName() << std::endl;
		delete rrf;
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
	catch (const ShrubberyCreationForm::UnverifiedException &e) <%
		std::cerr << e.what() << std::endl;
	%>
	catch (const Intern::ErrorExecption &e) <%
		std::cerr << "error empty string  " << e.what() << std::endl;
	%>
		delete rrf;
	return 0;
%>

