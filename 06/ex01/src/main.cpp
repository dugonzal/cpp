/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:24:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 11:38:10 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

int	main(void) <%

	Data a;

	a.name = "hola";
	a.lastName = "per";
	a.age = 23;
	
	uintptr_t  tmp = serialize(&a);
	
	std::cout << "datos serializados  " << tmp <<  std::endl;
	
	Data *b ;

	b = deserialize(tmp);

	std::cout << b->name << std::endl;
//	delete b;
//	delete a;
	return (0);
%>
