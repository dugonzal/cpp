/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:07:30 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/04 22:18:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int	main(int ac, const char **av) <%

  try <%
	RPN tmp;

	tmp.open(++av, --ac);
  %>
  catch(std::exception &e) <% 
	  std::cout << e.what() << std::endl;
  %>
%>
