/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:28:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/18 18:41:53 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap <%
	private:
		std::string	name;
	public:
		ClapTrap( void );
		ClapTrap( std::string _name );
		ClapTrap( const ClapTrap &other );
		~ClapTrap( void ); 
		const ClapTrap &operator=(const ClapTrap &other);
%>;

/*
std::ostream &operator(std::ostream &os, const ClapTrap &other) <%

	os << other.name;
	return (os);
%>
*/
#endif
