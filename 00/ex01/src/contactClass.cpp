/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:17:27 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/01 14:55:51 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBookClass.hpp"

contact::contact( void ) {
  std::cout << "inicio del contact" << std::endl;

}

contact::~contact( void ) {
  std::cout << "fin del contact" << std::endl;
}

void contact::setFirstName( std::string str ) {
	this->_firstName = str;
}
	
void contact::setLastName( std::string str ) {
	this->_lastName = str;
}

void contact::setNickname( std::string str ) {
	this->_nickname = str;
}

void contact::setPhoneNumber( std::string str ) {
	this->_phoneNumber = str;
}

void contact::setDarkestSecret( std::string str ) {
	this->_darkestSecret = str;
}

std::string	contact::getFirstName( void ) {
   return (this->_firstName);
}

std::string	contact::getLastName( void ) {
	return (this->_lastName);
}

std::string	contact::getNickName( void ) {
	return (this->_nickname);
}

std::string contact::truncate( std::string str ) {
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void contact::cleanContact( void ) {
	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickname.clear();
	this->_phoneNumber.clear();
	this->_darkestSecret.clear();
}

void contact::searchContact( void ) {
	if (this->_firstName.empty()){
	  std::cout << RED << "No contact to show" << RESET << std::endl;
	  return ;
	}
	
	std::cout << std::endl 	<< "First name: " << std::endl \
	<< this->_firstName << std::endl << std::endl << "Last name: " << std::endl \
	<< this->_lastName << std::endl << std::endl << "Nickname: " << std::endl \
	<< this->_nickname << std::endl  << std::endl << "Phone number: " << std::endl \
	<< this->_phoneNumber << std::endl << std::endl << "Darkest secret: " << std::endl \
	<< this->_darkestSecret << std::endl << std::endl;
}
