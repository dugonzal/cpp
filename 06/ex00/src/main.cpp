/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:07:35 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 13:24:10 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/convert.hpp"

/*Este literal será uno de los siguientes tipos escalares: char, int, float o double. Solo se utilizará la notación
decimal.*/
int	main(int ac, const char **av) <%

	if (ac != 2 )
	  return (std::cout << "Error: argument != 2" << std::endl, 1);
	
	try <%
	  convert tmp(av[1]);
	%>
	catch (std::exception &e) <%
	  std::cerr << e.what() << std::endl;
	%>
	return (0);
%>
