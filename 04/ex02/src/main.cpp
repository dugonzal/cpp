/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:55:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/02 18:44:49 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() <%
	const Animal* j = new Dog();
	const Animal* i = new Cat();
  
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	 
	//Animal yo; yo.makeSound();

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete  j;
	delete  i;
	return 0;
%>
