/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:56:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 15:31:57 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

using std::cout; 
using std::endl;
using std::string;

class Animal <%
	protected:
		string type;
	public:
	  Animal( void );
	  Animal( const Animal &other );
	  virtual ~Animal( void );
	  Animal( const string &_type );
	  const Animal &operator=( const Animal & other );
	  const string &getType( void ) const;
	  virtual void	makeSound( void )const;
%>;

#endif // ANIMAL_HPP
