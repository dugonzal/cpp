/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:03:18 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/05 06:32:50 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal <%
	
	private:
		Brain *brain;
	  
	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog &other );
		const Dog &operator=( const Dog &other);
		void	makeSound( void ) const; 
%>;

# endif
