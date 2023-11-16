/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:10:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 18:41:39 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"
# include "../inc/B.hpp"
# include "../inc/C.hpp"

// si no lo hago con new no puedo indentificarlo en la siguiente funcion
Base	*generate(void) <%
	
	std::srand(std::time(0));
	int r = 0;//std::rand() % 3;

	if (!r)
		return (new A);
	else if (r == 1)
		return (new B);
	else
	  	return (new C);
%>

void identify(Base *p) <%

	try <%
		if (dynamic_cast<A *>(p)) <%
			std::cout << "identify A" << std::endl;
			return ;
		%>
	%>
	catch (...) <% %>
	try <%
		if (dynamic_cast<B *>(p)) <%
			std::cout << "identify B" << std::endl;
			return ;
		%>
	%>
	catch (...) <% %>
	try <%
		if (dynamic_cast<C *>(p)) <%
			std::cout << "identify C" << std::endl;
			return ;
		%>
	%>
	catch (...) <% %>

%>

void identify(Base &p)<%

	try <%
		A tmp = dynamic_cast<A &>(p);
		std::cout << "identify A" << std::endl;
		return ;
	%>
	catch (...) <% %>
	try <%
		B tmp = dynamic_cast<B &>(p);
		std::cout << "identify B" << std::endl;
		return ;
	%>
	catch (...) <% %>
	try <%
		C tmp = dynamic_cast<C &>(p);
		std::cout << "identify C" << std::endl;
		return ;
	%>
	catch (...) <% %>
%>
int	main(void) <%

  Base *aa = NULL;

  aa = generate();

  identify(aa);
  identify(NULL);

  delete aa;
  return (0);
%>
