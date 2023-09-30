/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:04:17 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/30 14:09:09 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"


class ice: public AMateria <%
	  public:
		ice( void );
		~ice( void );
		ice( const ice &other );
		ice &operator=( const ice &other);

%>;


#endif
