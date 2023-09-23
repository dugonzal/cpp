/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:49:39 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/08 03:47:57 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../include/

#include <iostream>
#include <iomanip>

int	main(int, char **) {

  std::string	string;
  std::string	*stringPTR;
  std::string	&stringREF = string;
  
  string	= "HIS THIS IS BRAIN";
  stringPTR	= &string;
  //stringREF  string; // si no lo hago asi no puedo simplemente imprimir la direccion de memorria 
  std::cout << "address string     -> " << &string << std::endl; 
  std::cout << "address stringPTR  -> " << &stringPTR << std::endl; 
  std::cout << "address stringREF  -> " << &stringREF << std::endl; 
  std::cout << std::endl << "content string " << "    -> " << string << std::endl; 
  std::cout << "content stringPTR " << " -> " << *stringPTR << std::endl; 
  std::cout << "content stringREF " << " -> " << stringREF << std::endl; 
}
