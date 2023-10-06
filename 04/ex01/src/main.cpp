/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:55:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 03:19:03 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() <%
	const Animal* j = new Dog();
	const Animal* i = new Cat();
  
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	  
	const Animal* ii = new Cat();
	//const Animal* ia = new Cat();
	const Animal *a = new Cat();
	const Animal* deepCopyCat = new Cat(*static_cast<const Cat*>(a));

	const Animal *tmp = new Dog();
	const Animal *deepCopyDog = new Dog(*static_cast<const Dog*>(tmp));

	Dog dd;

	Dog aaa(dd);

	aaa.makeSound();
	Brain pp;
	Brain p(pp);

	deepCopyDog->makeSound();
	deepCopyCat->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	(void)p;
	delete tmp;
	delete deepCopyDog;
	delete a;
	delete deepCopyCat; 
	delete ii;
	delete  j;
	delete  i;
	return 0;
%>
