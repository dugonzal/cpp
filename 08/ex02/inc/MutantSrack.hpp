/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/29 15:53:32 by Dugonzal         ###   ########.fr       */
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
		  MutantStack<T>(void) <% %>

		  ~MutantStack<T>(void) <% %>
		  
		  MutantStack<T>(const MutantStack<T> &other) <% *this = other; %>
		 
		  class MutantStack<T>::container_type::iterator begin(void) <%

			  return MutantStack<T>::c::begin();
		  %>
%>;
