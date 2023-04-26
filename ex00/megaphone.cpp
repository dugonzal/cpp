/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/26 11:36:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av, char **) {
	if (ac > 1) {
		for (int i = 1; i < ac; i++)
		  for (int j = 0; av[i][j]; j++)
			 std::cout << (char)std::toupper(av[i][j]);
	}
	else
	  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	std::cout << std::endl; // salto de linea
	// lolo -->>execve("/bin/fsanitize", av, env); // muestro leaks
  return (0);
}
