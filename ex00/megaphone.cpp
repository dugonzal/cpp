/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/21 13:33:27 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *megaPhone(char *phone) {
	if (!phone)
		return (NULL);
	
	for (int i = -1; phone[i]; i++) // recorro la cadena
	  if (phone[i] >= 'a' && phone[i] <= 'z') // solo hay dos, asi 'a' - 32 = 'A' 
		std::cout << (phone[i] = phone[i] - 32); // asccii #
	  else
		std::cout << phone[i];
	
	return (phone);
}

int main(int ac, char **av, char **) {
  if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
  }
  for (int x = 1; x < ac; x++) // salto el nombre del programa y recorro los argumentos
	  if (!megaPhone(av[x]))
		continue;  

  std::cout << std::endl; // salto de linea
  // lolo -->>execve("/bin/fsanitize", av, env); // muestro leaks
  return (0);
}
