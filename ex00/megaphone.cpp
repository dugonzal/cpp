/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 02:08:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *MegaPhone(char *Str) {
	int y;

	y = -1;
	while (Str[++y]) {
	  if (Str[y] >= 'a' && Str[y] <= 'z') {
		std::cout << (Str[y] = Str[y]- 32);
	  }
	  else
		std::cout << Str[y];
	}
	return (Str);
}

int main(int Ac, char **Av) {
  
  if (Ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
  }

  if (Av[1][0] == '\0' && Ac > 1)
	   std::cout << "c++ empty > 1 " << std::endl;

  for (int x = 1; x < Ac; x++) {
	if (Av[x][0] == '\0')
		continue;
	else
	  MegaPhone(Av[x]);
  }

  std::cout << std::endl; // salto de linea
  
  return (0);
}
