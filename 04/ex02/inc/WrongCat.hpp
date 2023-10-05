/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:13:05 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/05 21:21:34 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal<%
	
	public:
	  WrongCat( void );
	  ~WrongCat( void );
	  WrongCat( const WrongCat &other );
	  WrongCat &operator=(const WrongCat &other);
	  void makeSound( void ) const;
%>;


#endif
