/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 14:52:14 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp"
		
BitcoinExchange::BitcoinExchange(void) <%

	std::ifstream	fileDb("data.csv");
	std::string		line;
	
	if (!fileDb.is_open() || (getline(fileDb, line) \
		  && line.compare("date,exchange_rate")))
		throw std::runtime_error("error data base");

	parserData(fileDb, line);
	fileDb.close();
%>
		
BitcoinExchange::~BitcoinExchange(void) <% %>

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) <% 
	
	*this = other;

%>
		
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) <%

	if (&other == this)
	  return (*this);

	db = other.db;
	return (*this);
%>

void BitcoinExchange::parserData(std::ifstream &fileDb, std::string &line) <%

	std::string date;
  	std::string mount;
	int 		i;

	while (getline(fileDb, line)) <%
	
		i = line.find_first_of(',');
		if (i < 0)
			throw std::runtime_error("Error data db");
		date = line.substr(0, i);
		mount = line.substr(++i);
		checkData(date, mount);
		db.insert( std::pair< std::string, std::string >(date, mount) );
	%>
%>

bool BitcoinExchange::checkData(std::string &date, std::string &mount) <%

	if (std::atoi(mount.data()) < 0)
		throw std::runtime_error("mount is < 0");
	(void)date;
	return (false);
%>
