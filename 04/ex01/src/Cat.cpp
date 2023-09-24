/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:43:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 13:19:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Cat.hpp"

Cat::Cat( void ): Animal("Cat")<%
	cout << "constructor default Cat" << endl;
%>

Cat::~Cat( void ) <%
	cout << "destructor default" << endl;
%>

Cat::Cat( const Cat &other ): Animal(other) <%
	cout << "constructor copy" << endl;
%>

const Cat &Cat::operator=( const Cat &other) <%
	cout << "operator `=`" << endl;
	Animal::operator=(other);
	return (*this);

%>
