/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 01:30:11 by Dugonzal         ###   ########.fr       */
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

int main(int Ac, char **Av)
{
  int x;

  if (Ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
  }
  x = 0;
  if (Av[x][0] == '\0')
	   std::cout << "c++ > 2 " << std::endl; 
  while (++x < Ac) {
	  Megaphone(Av[x]);
  }
  std::cout << std::endl; // salto de linea
  return (0);
}
