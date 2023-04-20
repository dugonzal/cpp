/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:26:58 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/20 16:50:35 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char**)
{
  int i;
  std::string duvan;

  if (ac < 1)
	return 1;

  std::cout << "Enter a string: ";
  std::cin >> duvan;
  i = 0;
  while (i < duvan.length()) {
	if  (tolower(duvan[i]))
	  duvan[i] = toupper(duvan[i]);
	else
	  duvan[i] = tolower(duvan[i]);
	i++;
  }
  std::cout << duvan << std::endl;
  return 0;
}
