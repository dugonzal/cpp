/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:10:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 18:21:49 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"
# include "../inc/B.hpp"
# include "../inc/C.hpp"

// si no lo hago con new no puedo indentificarlo en la siguiente funcion
Base	*generate(void) <%
	
	std::srand(std::time(0));
	int r = std::rand() % 3;

	if (!r)
		return (new A);
	else if (r == 1)
		return (new B);
	else
	  	return (new C);
%>

void identify(Base* p)<%
	
	if (dynamic_cast<A *>(p)) <%
		std::cout << "identify A" << std::endl;
		return ;
	%>
	else if (dynamic_cast<B *>(p)) <%
		std::cout << "identify B" << std::endl;
		return ;
	%>
	else if (dynamic_cast<C *>(p)) <%
		 std::cout << "identify C" << std::endl;
		  return ;
	%>
%>

void identify(Base &p)<%

  (void)p;
%>
int	main(void) <%

  Base *aa = NULL;

  aa = generate();

  identify(aa);

  delete aa;
  return (0);
%>
