/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:40:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:40 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
/*
 * para el caso en el que solo quiere un solo objeto de la clase zombie, hacerlo en el stack
 * esta bien, pero si quieres mas de uno y ademas quieres declararlo en el stack se vuelve poco escalable
 * y deberiamos almacenar los objetos en heap y destruir la memomria reservada cuando ya no la usemos*/
void randomChump( std::string name ) {
  Zombie	zombie(name);

  zombie.announce();
}
