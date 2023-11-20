/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:33:03 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/20 22:09:37 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

Data::Data(void): name("camilo"), lastName("sifuentes"),  age(24) <% %>

Data::Data(std::string _name, std::string _lastName, int _age): name(_name), lastName(_lastName), age(_age) <% %>
		
Data::~Data(void) <% %>

Data::Data(const Data &other) <% *this = other; %>
		
Data &Data::operator=(const Data &other) <%
	if (&other == this)
	  return (*this);
  name = other.name;
  lastName = other.lastName;
  age = other.age;
  return (*this);
%>

std::string &Data::getName(void) <% return(name); %>

std::string &Data::getLastName(void) <% return(lastName); %>
		
int	Data::getAge(void) <% return(age); %>

std::ostream &operator<<(std::ostream &os, Data &other)<%
  os << other.getName() << " " << other.getLastName() << " " << other.getAge();
  return (os);
%>
