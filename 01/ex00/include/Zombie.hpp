/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 09:50:35 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:26 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>
#include <iomanip>

class Zombie {

  private:
	std::string	_name;

  public:
	Zombie( std::string name );
	~Zombie( void );
	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
