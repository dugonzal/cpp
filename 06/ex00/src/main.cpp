/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:07:35 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/14 14:38:58 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

/*Este literal será uno de los siguientes tipos escalares: char, int, float o double. Solo se utilizará la notación
decimal.*/
int	main(int ac, const char **av) <%

	if (ac != 2)
	  return (0);

	std::string str(av[1]);
	std::cout << str << std::endl;
	return (0);
%>
