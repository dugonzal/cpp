/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:10:30 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:53:28 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

	Zombie *zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return (zombie);
}
