/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:52:56 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 16:42:58 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AMATERIA_HPP

#define AMATERIA_HPP
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Amateria <%
	protected:

	public:
		Amateria( void );
		~Amateria( void );
		Amateria( const Amateria &other );
		const Amateria &operator=( const Amateria &other);


%>;


#endif
