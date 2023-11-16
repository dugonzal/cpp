/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:24:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 12:02:28 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

int	main(void) <%

	Data a;

	a.name = "camilo";
	a.lastName = "tejeron";
	a.age = 23;
	
	uintptr_t  tmp = serialize(&a);
	
	std::cout << "datos serializados en hexadecimal " << std::hex << tmp << std::dec <<  std::endl;
	
	Data *b ;

	b = deserialize(tmp);

	std::cout << b->name << std::endl;
	std::cout << b->lastName << std::endl;
	std::cout << b->age << std::endl;
//	delete b;
//	delete a;
	return (0);
%>
