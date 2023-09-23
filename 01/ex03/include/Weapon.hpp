/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:14:40 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/11 22:39:58 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
#define Weapon_HPP

# include <iostream>
#include <string>
/*
*/
class Weapon <%
	private:
	  std::string	type;
	
	public:
	  Weapon ( std::string str );
	  ~Weapon( void );
	  std::string getType( void );
	  void	setType( std::string const str );
	
%>;

#endif
