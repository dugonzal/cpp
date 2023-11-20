/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:24:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/20 22:31:29 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"
# include "../inc/Serializer.hpp"

int	main(void) <%
	

	std::string input[3];

	std::cout << "name: -> ";
	std::cin >> input[0];
	std::cout << "lastName: -> ";
	std::cin >> input[1];
	std::cout << "age: -> ";
	int age; 
	std::cin >> age;

	Data tmpp (input[0], input[1], age);
	Data tmp(tmpp);


	Data tmp2 = tmp;
	uintptr_t n = Serializer::serialize(&tmp2);
	
	std::cout << "datos serializados: " << std::hex << n << std::dec << std::endl;
	
	Data *tmp1 = Serializer::deserialize(n);

	if (tmp1 == &tmp2)
	  std::cout << std::endl << "equal Data" << std::endl;
	else 
		std::cout << "diferent data" << std::endl;
	std::cout << std::endl << "datos despues de deserializar: " << *tmp1 << std::endl;
	return (0);
%>
