/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:10:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:48:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/A.hpp"
# include "../inc/B.hpp"
# include "../inc/C.hpp"

int	main(void) <%

  A *tmp  = new A;
  B *tmp1 = new B;

  (void)tmp;
  (void)tmp1;
  
  delete tmp;
  delete tmp1;
  std::cout << "hola mundo" << std::endl;
  return (0);
%>
