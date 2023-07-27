/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:44:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/07/25 12:39:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	if (ac > 1)
		for (int i = 1; i < ac; i++)
		  for (int j = 0; av[i][j]; j++)
			 std::cout << (char)std::toupper(av[i][j]);
	else
	  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
