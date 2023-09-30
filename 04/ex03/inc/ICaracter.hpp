/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICaracter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:45:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/30 14:00:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICARACTER_HPP
#define ICARACTER_HPP

class IChacaracter :public AMateria <%
	public:
		IChacaracter( void );
		~IChacaracter( void );
		IChacaracter( const ICaracter &other );
		operator=(const IChacaracter &other);


%>;


#endif
