/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:24:38 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 08:35:39 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

int	main(void) <%

	Data *a = new Data();

	a->name = "hola";
	std::cout << a->name << "  hola mundo" << std::endl;
	delete a;
	return (0);
%>
