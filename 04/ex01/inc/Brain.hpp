/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:57:13 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/06 12:31:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain <%

	private:
	  std::string *ideas;

	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain &other );
		Brain &operator=( const Brain &other );
		//void allIdeas( void ) ;
%>;



#endif
