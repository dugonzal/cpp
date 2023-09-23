/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:46:58 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 01:15:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp" 

int	main( int ac, char const** av, char const** ) {
  std::string	level;
  Harl			harl;

  if  (ac != 2) {
	  std::cout << "ingresa el nivel de harl : ";
	  std::cin >> level;
  }
  else 
	  level = av[1];
  harl.complain(level);
  return (0);

}
