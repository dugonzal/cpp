/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:35:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/24 20:21:36 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal <%
	private:
		Brain *level;
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &other );
		const Cat &operator=( const Cat &other);
		void	makeSound( void ) const{
			std::cout << "yo soy un gato" << std::endl;
		};
%>;


# endif
