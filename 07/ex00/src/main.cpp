/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:48:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/22 16:18:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

int	main( void ) {
  
  int a = 2;
  int b = 3;
  
  ::swap( a, b );
  cout << "a = " << a << ", b = " << b << std::endl;
  cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  cout << "c = " << c << ", d = " << d << std::endl;
  cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
  return 0;
}
