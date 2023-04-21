/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 01:34:08 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *Megaphone(char *str)
{
	int y;

	y = 0;
	while (str[y]) {
	  if (str[y] >= 'a' && str[y] <= 'z')	  
	   str[y] -= 32;
		std::cout << str[y];
	  y++;
	}
	return (str);
}

int main(int Ac, char **Av) {
  if (Ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
  }
  if (Av[1][0] == '\0')
	   std::cout << "c++ > 2 " << std::endl; 
  for (int x = 1; x < Ac; x++) {
	  Megaphone(Av[x]);
  }
  std::cout << std::endl; // salto de linea
  return (0);
}
