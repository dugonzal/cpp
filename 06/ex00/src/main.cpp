/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:07:35 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 19:19:21 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/ScalarConvert.hpp"

int	main(int ac, const char **av) <%

	if (ac != 2 )
		return (std::cerr << "Error: argument != 2" << std::endl, 1);
	
	ScalarConvert tmp(av[1]);
	try <%
	 
	  //tmp.convertAndPrint();
	%>
	catch (std::exception &e) <%
	  std::cerr << e.what() << std::endl;
	%>
	return (0);
%>
