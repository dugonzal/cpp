/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:38:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 16:43:12 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Amateria.hpp"


Amateria::Amateria( void ) <%
	cout << "constructor Amateria" << endl;

%>

Amateria::~Amateria( void ) <%
	cout << "destructor Amateria" << endl;


%>
Amateria::Amateria( const Amateria &other ) <%
	*this = other;
%>

const Amateria &Amateria::operator=( const Amateria &other)<%
	(void)other;
// no se que atributos tiene esta clase
  return (*this);
%>
