/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:17:06 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/05 21:22:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("CAT") <%
	std::cout << "constructor WrongCat" << std::endl;
%>

WrongCat::~WrongCat( void ) <%
	std::cout << "destrutor WrongCat" << std::endl;
%>
	
WrongCat::WrongCat( const WrongCat &other ): WrongAnimal(other) <%
	std::cout << "constructor copy" << std::endl;
%>
	  
WrongCat &WrongCat::operator=(const WrongCat &other) <%
	WrongAnimal::operator=(other);
	return (*this);
%>

void	WrongCat::makeSound( void ) const <%
	std::cout << "sound very miau" << std::endl;
%>
