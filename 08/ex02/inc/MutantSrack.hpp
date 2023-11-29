/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/29 20:25:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <stack>
# include <list>
# include <vector>

// tambien podria acceder por aqui 
//using container_type  = Container;

//protected:
//  Container c; el contenedor es  c
// aqui esta el truco que stack, usa el contenedor deque, es por hay
//template<class T, class Container = deque<T> >
template <class T >
class	MutantStack: public std::stack<T> <%
	  
	  public:
		  typedef class MutantStack<T>::container_type::iterator 		iterator;
		  
		  typedef class std::stack<T>::container_type::const_iterator	const_iterator;
		  
		  MutantStack<T>(void) <% %>

		  ~MutantStack<T>(void) <% %>
		
		  MutantStack<T>(const MutantStack<T> &other) <% *this = other; %>
		 
		  iterator begin(void) <%	
			  return (this->c.begin());
		  %>
		
		 iterator end(void) <%
			  return (this->c.end());
		  %>
		
		  iterator rbegin(void) <%
			  return (std::stack<T>::c.rbegin());
		  %>
		  iterator rend(void) <%
			  return (std::stack<T>::c.end());
		  %>
%>;
