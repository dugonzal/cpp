/*# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main.cpp                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 11:25:38 by Dugonzal          #+#    #+#              #
#    Updated: 2023/08/13 18:35:39 by Dugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

static std::string	replace( std::string line, std::string s1, std::string s2 ) {

	size_t pos = line.find(s1);
	while ( pos != std::string::npos ) {
		line.erase(pos, s1.size());
		line.insert(pos, s2);
		pos = line.find(s1);
	}
	return ( line );
}

static int	core( char const** av ) {
	std::string		filename( av[1] );
	std::string 	s1( av[2] );
	std::string 	s2( av[3] );
	std::ifstream	infile( filename.c_str() );
	std::string		line;
	std::string 	contenido;
	
	if ( !infile.is_open() || s1.empty() ) {
		std::cout << "error no open infile" << std::endl;
		infile.close();
		return ( 0 );
	}
	std::ofstream	outfile( filename.append(".replace").data() );
	if ( !outfile.good() ) {
		std::cout << "error no open infile" << std::endl;
		infile.close();
		outfile.close();
		return ( 0 );
	}
	while ( std::getline( infile, line ) )
		contenido += line + '\n' ;
	outfile << replace( contenido, s1, s2 ) << std::endl;
	infile.close();
	outfile.close();
	return ( 0 );
}

int	main( int ac,  char const** av, char ** ) {

	if ( ac != 4 ) {
	  std::cout << "errror de argumentos" << std::endl;
	  return (0);
	}
	return ( core ( av ) );
}
