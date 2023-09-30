/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:38:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/30 11:58:25 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria( void ) <%
	cout << "constructor AMateria" << endl;
%>

AMateria::~AMateria( void ) <%
	cout << "destructor AMateria" << endl;
%>

AMateria::AMateria( const AMateria &other ) <%
	*this = other;
%>

AMateria::AMateria( const string &_type ): type(_type) <%
	cout << "constructor type AMateria" << endl;
%>
const AMateria &AMateria::operator=( const AMateria &other)<%
	type = other.getType();
	return (*this);
%>

string const &AMateria::getType( void ) const <%
	return (type);
%>
