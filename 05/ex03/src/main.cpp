/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/11/13 12:46:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Bureaucrat.hpp"
# include "../inc/ShrubberyCreationForm.hpp"
# include "../inc/RobotomyRequestForm.hpp"
# include "../inc/PresidentialPardonForm.hpp"
# include "../inc/Intern.hpp"

int main() <%
	try <%
		 Intern someRandomIntern;
		  AForm *rrf;
	  
		rrf = someRandomIntern.makeForm("robotomy request", "");
		if (rrf == NULL)
			return (0);
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	%>
	catch (const std::exception &e) { 
		std::cerr << "error empty string  " << std::endl;
	}
	return 0;
%>
