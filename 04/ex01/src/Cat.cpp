/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:43:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/25 13:47:29 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Cat.hpp"

Cat::Cat( void ): Animal("Cat"), level(new Brain())  <%
	std::cout << "constructor default Cat" << std::endl;

%>

Cat::~Cat( void ) <%
	std::cout << "destructor default" << std::endl;
	delete level;
%>

Cat::Cat( const Cat &other ): Animal(other) <%
	std::cout << "constructor copy" << std::endl;
%>

const Cat &Cat::operator=( const Cat &other) <%
	std::cout << "operator `=`" << std::endl;
	Animal::operator=(other);
	return (*this);

%>
