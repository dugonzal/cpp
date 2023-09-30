/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:52:56 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/30 13:44:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AMATERIA_HPP

#define AMATERIA_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class AMateria <%
	protected:
		string type;
	  
	public:
		AMateria( void );
		~AMateria( void );
		AMateria( const AMateria &other );
		AMateria( const string &_type );
		const AMateria &operator=( const AMateria &other);
		string const &getType( void ) const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
%>;


#endif
