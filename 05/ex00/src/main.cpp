/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:30:59 by dugonzal          #+#    #+#             */
/*   Updated: 2023/10/25 19:16:19 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int	main(int, char **, char **) {
	try {
	  std::cout << "free for random" << std::endl;
		int p = 100;
		int i = 10;
		i -= i == p +  i - 0 + 3;
		std::cout << i << std::endl;
		Bureaucrat tmp;
		
		if (tmp.getGrade() > 0)
			throw Bureaucrat::GradeTooHighException() ;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
	  std::cout << e.what() << std::endl;
	}
	  return 0;
}
