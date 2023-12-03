/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 19:07:19 by Dugonzal         ###   ########.fr       */
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

std::size_t BitcoinExchange::getDate(const std::string &line) const <%
	
	std::istringstream	ss(line);
	std::ostringstream	tmp;
	std::string 		concat;
	float 				year, month, day;
	char 				dash[2];
	
	ss >> year >> dash[0] >> month >> dash[1] >> day;
	tmp << year << month << day;
	
	return (static_cast<std::size_t>(atof(tmp.str().data())));
%>

void BitcoinExchange::getDb(std::ifstream &fileDb, std::string &line) <%
	std::size_t	date;
	float 		month;
	char 		*c;
	int			i;
	
	while (getline(fileDb, line)) <%
		i = line.find_first_of(',');
		date = getDate(line.substr(0, i));
		month = std::strtof(line.substr(++i).data(), &c );
		db.insert( std::pair< std::size_t, float >( date, month));
	%>
%>

void BitcoinExchange::open(const std::string &fileName)<%

	std::ifstream 	file(fileName.data());
	std::string 	line, date, month;
	int 			i;

	if (!file.is_open() || (std::getline(file, line) \
		  && line.compare("date | value")))
		throw std::runtime_error("Error: could not open file.");
	
	while (getline(file, line)) <%
		i = line.find_first_of("|");
		date = line.substr(0, i);
		month = line.substr(i + 1);
		if (checkData(i, date, month))
		  continue;
		std::cout << line << std::endl;
	%>
	
	file.close();
%>

bool BitcoinExchange::checkData(const int &i, const std::string &date, const std::string &mount) const <%
	
	int tmp = std::atoi(mount.data());
	
	if (checkDate(date, i))
		return (true);
	else if (tmp < 0)
		return (std::cerr << "Error: not a positive number." << std::endl, true);
	else if (tmp > INT_MAX)
		return (std::cerr << "Error: too large a number." << std::endl, true);
	return (false);
%>

bool BitcoinExchange::checkDate(const std::string &date, const int &i) const <%

	std::istringstream	ss(date);
	float 				year, month, day;
	char				dash[2];
	
	(void)i;
	ss >> year >> dash[0] >> month >> dash[1] >> day;
	
	if (dash[0] != '-' || dash[1] != '-')
		return (std::cerr << ("Error bad input >= ") << date << std::endl, true);
	else if (month < 0 || month > 12 || day < 0 || day > 31 || year < 0 || year > 2022)
		return (std::cerr << ("Error bad input >= ") << date << std::endl, true);
	return (false);
%>
