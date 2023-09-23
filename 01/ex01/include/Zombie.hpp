/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:22:45 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 11:57:57 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Zombie {
  private:
	std::string name;

  public:
	Zombie ( void ); // no puedo almacenar la memoria si tengo que indicar el nombre
	~Zombie ( void );
	void	announce( void );
	void	setName( std::string name );
};

Zombie	*zombieHorde( int N, std::string name );
#endif // !Zombie
