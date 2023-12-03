/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 17:52:46 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/BitcoinExchange.hpp"
		
BitcoinExchange::BitcoinExchange(void) <%

	std::ifstream	fileDb("data.csv");
	std::string		line;
	
	if (!fileDb.is_open() || (getline(fileDb, line) \
		  && line.compare("date,exchange_rate")))
		throw std::runtime_error("error data base");

	getDb(fileDb, line);
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

void BitcoinExchange::getDb(std::ifstream &fileDb, std::string &line) <%

	int	i;

	while (getline(fileDb, line)) <%
		i = line.find_first_of(',');
		db.insert( std::pair< std::string, std::string >(line.substr(0, i), line.substr(i + 1)) );
	%>
%>

void BitcoinExchange::open(const std::string &fileName)<%

	std::ifstream 	file(fileName.data());
	std::string 	line;
	int 			i;

	if (!file.is_open() || (std::getline(file, line) \
		  && line.compare("date | value")))
		throw std::runtime_error("Error: could not open file.");
	
	while (getline(file, line)) <%
		i = line.find_first_of("|");
		if (checkData(i, line.substr(0, i), line.substr(i + 1)))
		  continue;
		std::cout << line << std::endl;
	  %>
	
	file.close();

%>

bool BitcoinExchange::checkData(const int &i, const std::string &date, const std::string &mount) const <%
	
	int tmp = std::atoi(mount.data());
	
	if (tmp < 0)
		return (std::cerr << "Error: not a positive number." << std::endl, true);
	else if (tmp > INT_MAX)
		return (std::cerr << "Error: too large a number." << std::endl, true);
	else if (checkDate(date, i))
		return (true);
	return (false);
%>

bool BitcoinExchange::checkDate(const std::string &date, const int &i) const <%

	std::istringstream ss(date);
	
	(void)i;
	float year, month, day;
	char dash[2];
	ss >> year >> dash[0] >> month >> dash[1] >> day;
	if (dash[0] != '-' || dash[1] != '-') <%
		std::cerr << ("Error format db [-]") << std::endl;
		return (true);
	%>
	else if (month < 0 || month > 12 || day < 0 || day > 31) <%
		std::cerr << ("Error bad input >= ") << date << std::endl;
		return (true);
	%>
	return (false);
%>

