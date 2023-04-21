/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 02:17:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *MegaPhone(char *Str) {
	int y;

	if (!Str)
		return (NULL);
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
  
  for (int x = 1; x < Ac; x++)
	  if (!MegaPhone(Av[x]))
		continue;  

  std::cout << std::endl; // salto de linea
  
  return (0);
}
