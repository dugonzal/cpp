/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:10:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 17:43:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"
# include "../inc/B.hpp"
# include "../inc/C.hpp"

// si no lo hago con new no puedo indentificarlo en la siguiente funcion
Base	*generate(void) <%
	
	std::srand(std::time(0));
	int r = std::rand() % 3;
	std::cout << r << std::endl;
	if (!r)
		return (new A);
	else if (r == 1)
		return (new B);
	else 
		return (new C);
	return (NULL);
%>

void identify(Base* p)<%
	
	try <%
		A *tmp = dynamic_cast<A *>(p);
		if (tmp)	
		  std::cout << "se identifico que es A" << std::endl;
	//	std::cout << tmp << std::endl;
	%>
	catch(...) <% %>
%>

int	main(void) <%

  A *tmp  = new A;
  B *tmp1 = new B;
  C *tmp2 = new C;

  (void)tmp;
  (void)tmp1;
  (void)tmp2;
  
  Base *aa = NULL;

  aa =generate();
  identify(aa);

  delete aa;
  (void)aa;
  delete tmp;
  delete tmp1;
  delete tmp2;
  std::cout << "hola mundo" << std::endl;
  return (0);
%>
