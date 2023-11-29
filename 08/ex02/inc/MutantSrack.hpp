/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantSrack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/29 15:22:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <stack>

// aqui esta el truco que stack, usa el contenedor deque, es por hay
//template<class T, class Container = deque<T> >
template <class T >
class	MutantStack: public std::stack<T> <%
	  private:

	  public:
		  MutantStack<T>(void) <% %>

		  ~MutantStack<T>(void) <% %>
		  
		  MutantStack<T>(const MutantStack<T> &other) <% *this = other; %>
%>;
