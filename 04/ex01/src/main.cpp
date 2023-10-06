/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:55:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 16:03:14 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() <%
	const Animal* j = new Dog();
	const Animal* i = new Cat();
  
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	 

	Animal *gatoCat[10];
	for (int i = 0; i <  10; i++) {
		gatoCat[i] = new Cat();
		gatoCat[i]->makeSound();
		delete gatoCat[i];
	}
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	const Animal* ii = new Cat();
	const Animal *a = new Cat();
	const Animal* deepCopyCat = new Cat(*static_cast<const Cat*>(a));

	const Animal *tmp = new Dog();
	const Animal *deepCopyDog = new Dog(*static_cast<const Dog*>(tmp));

	Dog dd;

	Dog aaa(dd);

	aaa.makeSound();
	Dog c;
	Dog b;

	c = b;

	c.makeSound();
	Brain pp;
	Brain p(pp);
	Brain app;
	
	app = pp;
	const Animal* o = new Cat();
	
	Cat ad(*static_cast<const Cat*>(o));
	
	Cat ss = ad;
	ad.makeSound();
	ss.makeSound();
	delete o;
	p.allIdeas();
	(void)p;
	(void)app;
	deepCopyDog->makeSound();
	deepCopyCat->makeSound();

	delete tmp;
	delete deepCopyDog;
	delete a;
	delete deepCopyCat; 
	delete ii;
	delete  j;
	delete  i;
	return 0;
%>
