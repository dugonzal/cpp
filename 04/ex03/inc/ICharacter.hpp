/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:45:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/30 14:10:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICARACTER_HPP
#define ICARACTER_HPP

class ICaracter: public AMateria <%
	public:
		ICaracter( void );
		~ICaracter( void );
		ICaracter( const ICaracter &other );
		ICaracter &operator=(const ICaracter &other);

%>;

#endif
