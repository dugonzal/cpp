/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 16:57:17 by Dugonzal         ###   ########.fr       */
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

	int	i;

	while (getline(fileDb, line)) <%
	
		i = line.find_first_of(',');
		db.insert( std::pair< std::string, std::string >(line.substr(0, i), line.substr(i + 1)) );
	%>
%>

void BitcoinExchange::checkData(const std::string &date, const std::string &mount) <%

	if (std::atoi(mount.data()) < 0)
		throw std::runtime_error("mount is < 0");
	
	checkDate(date);	
%>

void BitcoinExchange::checkDate(const std::string &date) const <%

	std::istringstream ss(date);

	float year, month, day;
	char dash[2];
	ss >> year >> dash[0] >> month >> dash[1] >> day;
	if (dash[0] != '-' || dash[1] != '-')
		throw std::runtime_error("Error format db [-]");
	else if (month < 0 || month > 12 || day < 0 || day > 31)
		throw std::runtime_error("Error format db [y-m-d]");
%>

