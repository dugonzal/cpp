/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:36:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/07/27 14:24:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <stdlib.h>
# include <stdio.h>
# include <iomanip>
# include <string>
# include <ctime>
# include <unistd.h>
# define BLUE  "\033[34m"
# define GREEN "\033[32m"
# define RESET "\033[0m"
# include "contactClass.hpp"

class phoneBook {

  public:
	  phoneBook( void );
	  ~phoneBook( void );
	  void	banner ( void );
	  void	open( void  );
	  void	printContact( void );
	  void	createContact( int index );
	  std::string	getInput( std::string s );
	  void	setContact( int index );
	  void	getContacts( void );
	  void	option( int i );
  private:
	  contact	_contact[8];
};

#endif
