/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:07:35 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 18:27:53 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ScalarConvert.hpp"

int	main(int ac, const char **av) <%

	if (ac != 2 )
	  return (std::cout << "Error: argument != 2" << std::endl, 1);
	
	try <%
	  ScalarConvert tmp(av[1]);
	  ScalarConvert tmp2(tmp);
	 
	  tmp2 = tmp;
	  tmp2.convertAndPrint();
	%>
	catch (std::exception &e) <%
	  std::cerr << e.what() << std::endl;
	%>
	return (0);
%>
