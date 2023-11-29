/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/29 21:12:44 by Dugonzal         ###   ########.fr       */
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
template<class T, class Container = std::deque<T> >
class	MutantStack: public std::stack<T, Container> <%
	  
	  public:
		  typedef class MutantStack<T, Container>::container_type::iterator 		iterator;
		  
		  typedef class MutantStack<T, Container>::container_type::const_iterator	const_iterator;
		  
		  MutantStack<T, Container>(void) <% %>

		  ~MutantStack<T, Container>(void) <% %>
		
		  MutantStack<T, Container>(const MutantStack<T, Container> &other) <% *this = other; %>
		 
		  iterator begin(void) <%	
			  return (MutantStack<T, Container>::c.begin());
		  %>
		
		 iterator end(void) <%
			  return (std::stack<T, Container>::c.end());
		  %>
		
		  iterator rbegin(void) <%
			  return (this->c.rbegin());
		  %>
		  iterator rend(void) <%
			  return (Container::c::end());
		  %>
%>;
