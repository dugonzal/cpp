/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:35:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/28 11:41:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal <%
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &other );
		const Cat &operator=( const Cat &other);
		void	makeSound( void ) const;
%>;


# endif
