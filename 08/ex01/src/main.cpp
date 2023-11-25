/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:50:29 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/25 14:35:17 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "../inc/Span.hpp"
# include "../src/Span.cpp"

int	main(int, char const **) <%

  try <%
	Span<int> tmp;
	Span<int> tmp2(5);
	(void)tmp;
	(void)tmp2;
  %>
  catch(std::exception &e) <% std::cerr << e.what() << "" << std::endl;  %>
%>
