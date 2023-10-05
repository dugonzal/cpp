/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:20:22 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/10/05 21:18:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal <%

	private:
		std::string type;
	public:
	  WrongAnimal( void );
	  ~WrongAnimal( void );
	  WrongAnimal( const WrongAnimal &other );
	  WrongAnimal &operator=( const WrongAnimal &other );
	  WrongAnimal(const std::string &type );
	  void	makeSound( void ) const;
%>;

#endif
