/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:32:23 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/01 14:34:01 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBookClass.hpp"

phoneBook::phoneBook( void ) {
  std::cout << "init class phoneBook" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contact[i].cleanContact();
}

phoneBook::~phoneBook( void ) {
  std::cout << BLUE << "phoneBook destroy"  << RESET<< std::endl;
}

void	phoneBook::banner ( void ) {
  std::cout << GREEN << " _________________________________ " << RESET << std::endl;
  std::cout << GREEN << "|     phoneBook que empiece       |" << RESET << std::endl;
  std::cout << GREEN << "|         la diversion            |" << RESET << std::endl;
  std::cout << GREEN << "|       tus opciones son:         |" << RESET << std::endl;
  std::cout << GREEN << "| 1. ADD   2. SEARCH   3. EXIT    |" << RESET << std::endl;
  std::cout << GREEN << "|         By: Dugonzal            |" << RESET << std::endl;
  std::cout << GREEN << "|_________________________________|" << RESET << std::endl;
}

std::string	phoneBook::getInput( std::string s ){
	
	std::cout << std::endl << s << std::endl;
	std::string str;
	std::getline(std::cin, str);
	
	if (str.empty())
		return (getInput(s));
	return (str);
}

int	phoneBook::setContact( int index ) {
	this->_contact[index].setFirstName(phoneBook::getInput("First Name"));
	this->_contact[index].setLastName(phoneBook::getInput("Last Name"));
	this->_contact[index].setNickname(phoneBook::getInput("nickname"));
	this->_contact[index].setPhoneNumber(phoneBook::getInput("Phone Number"));
	this->_contact[index].setDarkestSecret(phoneBook::getInput("Darkest Secret"));
	std::system("clear");
	return (index + 1);
}

void	phoneBook::getContacts( void ) {

	std::cout  << std::setw(10) << "index" << "|" << std::setw(10) \
	<< "first name" << "|" <<   std::setw(10) << "last name" \
	<< "|" << std::setw(10) << "nickname" << "|" << std::endl;
	
	for (int i = 0; i < 8; i++) {
		if (this->_contact[i].getFirstName().empty())
			break;
		std::cout <<  std::setw(10) << i << "|" << std::setw(10) \
		<< this->_contact[i].truncate(this->_contact[i].getFirstName())	<< "|" \
		<< std::setw(10) << this->_contact[i].truncate(this->_contact[i].getLastName()) \
		<< "|"  << std::setw(10) << this->_contact[i].truncate(this->_contact[i].getNickName()) \
		<< "|" << std::endl;	
	}
}

void phoneBook::option( int i ){
	std::system("clear");
	this->banner();
	if (i == 1) {
		std::cout <<  std::endl;
		std::cout <<  "elije una opcion: " << std::endl;
	}
	else
		std::cout <<  std::endl;
}

void	phoneBook::open( void ) {
	
	std::string opcion;
	std::string indexContactStr;
	int index = 0;
	
	this->option(1);
	while (true) {
	  std::getline(std::cin, opcion);
	  if (opcion == "ADD" || opcion == "add" || opcion == "1") {
		
		  this->option(0);
		  if (index == 8)
			index = 0;
		  index = this->setContact(index);
		  this->option(0);
	  }
	  else if (opcion == "SEARCH" || opcion == "search" || opcion == "2"){
		
		  this->option(0);
		  this->getContacts();
		  std::cout << std::endl << std::endl;
		  indexContactStr  = this->getInput("index contact");
		  int indexContact = std::atoi(indexContactStr.c_str());
		  if ((indexContact == 0 && indexContactStr.size() > 1) \
		  || (indexContactStr.size() == 1 && indexContactStr != "0")){
			  this->option(1);
			  std::cout << std::endl << "index contact no valid" << std::endl;
			  continue;
		  }
		  else if (indexContact < 0 or indexContact > 7){
			  this->option(1);
			  std::cout << std::endl << "index contact no valid " << std::endl;
			  continue;
		  }
		  this->_contact[indexContact].searchContact();
	  }
	  else if (opcion == "EXIT" || opcion == "exit" || opcion == "3") 
			return;
	  else{
		  this->option(1);
		  continue;
	  }
	}
}
