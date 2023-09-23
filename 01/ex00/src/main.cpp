/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:01:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 01:07:15 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main( void ){
  Zombie	*_zombie;
  Zombie	Zombie("zombie 0 stack"); // stack pila memoria local

  Zombie.announce();
  
  _zombie = newZombie("zombie 1 heap");
  _zombie->announce();
  randomChump("zombie 2 stack"); 
  delete _zombie ; // heap memoria dinamica
  return (0);
}
