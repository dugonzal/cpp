/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/29 16:47:49 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <stack>

// tambien podria acceder por aqui 
//using container_type  = Container;

//protected:
//  Container c; el contenedor es  c
// aqui esta el truco que stack, usa el contenedor deque, es por hay
//template<class T, class Container = deque<T> >
template <class T >
class	MutantStack: public std::stack<T> <%
	  private:
	  public:
		 typedef class MutantStack<T>::container_type::iterator iterator;
		  MutantStack<T>(void) <% %>

		  ~MutantStack<T>(void) <% %>
		  
		  MutantStack<T>(const MutantStack<T> &other) <% *this = other; %>
		/* 
		  class MutantStack<T>::container_type::iterator begin(void) <%
			  return MutantStack<T>::c::begin();
		  %>
		  
		  class MutantStack<T>::container_type::iterator end(void) <%
			  return MutantStack<T>::c::end();
		  %>
		  */
		  
		  iterator begin(void) <%
			  return std::stack<T>::c.begin();
		  %>
		  iterator end(void) <%
			  return std::stack<T>::c.end();
		  %>
%>;
