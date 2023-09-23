/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:16:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:53:19 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

std::string getInput(std::string banner) {
	std::string	str;

	std::cout << banner;
	std::getline(std::cin, str);
	if (str.empty()) {
	  std::cout << " empty: " << std::endl;
	  return (getInput(banner));
	}
	return (str);
}

int	main(void)
{
  Zombie		*zombie;
  int			N;


  N = std::atoi(getInput("ingresa el numero de zombies: ").c_str());
  zombie = zombieHorde(N, getInput("ingresa el nombre de los zombies: "));

  for (int i = 0; i < N; i++)
	zombie[i].announce();
  std::cout << std::endl;

  delete [] zombie;
  return (0);
}
