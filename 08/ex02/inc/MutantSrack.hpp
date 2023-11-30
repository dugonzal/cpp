/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/30 15:31:39 by Dugonzal         ###   ########.fr       */
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
template <class T, class Container = std::deque<T> >

class	MutantStack: public std::stack<T, Container> <%
	  
	  public:
		  typedef typename MutantStack<T, Container>::container_type::iterator 		iterator;
		  
		  typedef typename MutantStack<T, Container>::container_type::const_iterator	const_iterator;
		  
		  MutantStack<T, Container>(void) <% %>

		  ~MutantStack<T, Container>(void) <% %>
		
		  MutantStack<T, Container>(const MutantStack<T, Container> &other): std::deque<T, Container>(other) <%
			  
			  std::stack<T, Container>::operator=(other);
			  this->Container(other);
		  
		  %>

		  MutantStack &operator=(const MutantStack<T, Container> &other) <%

			  if (&other == this)
				  return (*this);

			  std::stack<T, Container>::operator=(other);
			  return (*this);
		  %>

		  iterator begin(void) <%	
			  return (this->c.begin());
		  %>
		
		  iterator end(void) <%
			  return (this->c.end());
		  %>
		
		  iterator rbegin(void) <%
			  return (this->c.rbegin());
		  %>
		  
		  iterator rend(void) <%
			  return (this->c.rend());
		  %>
		  
		  const_iterator begin(void) const <%	
			  return (this->c.begin());
		  %>
		
		 const_iterator end(void) const <%
			  return (this->c.end());
		  %>
		
		  const_iterator rbegin(void) const <%
			  return (this->c.rbegin());
		  %>

		  const_iterator rend(void) const <%
			  return (this->c.rend());
		  %>
%>;
