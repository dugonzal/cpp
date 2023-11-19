/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:24:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 15:32:54 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"
# include "../inc/Serializer.hpp"

int	main(void) <%
	Data tmp ("bob", "sancho", 45);

	uintptr_t n = Serializer::serialize(&tmp);
	
	std::cout << "datos serializados: " << std::hex << n << std::dec << std::endl;
	
	Data *tmp1 = Serializer::deserialize(n);

	if (&tmp == tmp1)
	  std::cout << std::endl << "equal Data" << std::endl;
	else 
		std::cout << "diferent data" << std::endl;
	std::cout << std::endl << "datos despues de deserializar: " << *tmp1 << std::endl;
	return (0);
%>
