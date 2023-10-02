/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:29:03 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/02 15:12:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../inc/ice.hpp"

ice::ice( void ) <%
	std::cout << "ice constructor" << std::endl;
%>

ice::~ice( void ) <%
	std::cout << "ice destructor" << std::endl;
%>

ice::ice( const ice &other ) <%
	std::cout << "copy ice" << std::endl;
	*this = other;
%>

AMateria *ice::clone( void ) <%
	AMateria tmp = new ice();
	return (tmp)
%>

