/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:52:56 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/25 18:55:45 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AMATERIA_HPP

#define AMATERIA_HPP

class Amateria <%
	protected:

	public:
		Amateria( void );
		~Amateria( void );
		Amateria( const Amateria &other );
		operator=( const Amateria &other);


%>;


#endif
