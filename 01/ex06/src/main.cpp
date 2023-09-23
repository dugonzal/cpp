/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:46:58 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/03 19:59:59 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int	main( int ac, char const** av, char const** ) {

  std::string	level;
  Harl			harl;

  if  (ac == 2) {
	  level = av[1];
  }
  else {
	std::cout << "ingresa el nivel de harlFilter : ";
	std::cin >> level;
	std::cout << std::endl;
  }
  harl.complain(level);
  return (0);
}
