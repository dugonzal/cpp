/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:55:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 15:57:38 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() <%
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	  
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete  j;
	delete  i;
	return 0;
%>
