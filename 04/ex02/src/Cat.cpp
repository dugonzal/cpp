/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:43:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/27 10:01:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Cat.hpp"

Cat::Cat( void ): Animal("Cat"), brain(new Brain)  <%
	std::cout << "constructor default Cat" << std::endl;
%>

Cat::~Cat( void ) <%
	std::cout << "destructor default" << std::endl;
	delete  brain; 
%>

Cat::Cat( const Cat &other ): Animal(other) <%
	std::cout << "constructor copy" << std::endl;
%>

const Cat &Cat::operator=( const Cat &other) <%
	std::cout << "operator `=`" << std::endl;
	Animal::operator=(other);
	return (*this);
%>

void	Cat::makeSound( void ) const <%
	std::cout << "yo soy un gato" << std::endl;
%>
