/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:38:00 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:51:45 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie( std::string name ){
	  Zombie *zombie;
	  if (name.empty()) {
		name = "zombie";
	  }
	  zombie = new Zombie(name);
	  return (zombie);
}

