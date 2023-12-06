/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:07:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 17:26:31 by Dugonzal         ###   ########.fr       */
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

size_t BitcoinExchange::getDate(const std::string &line) const <%
	
	std::istringstream	ss(line);
	std::ostringstream	tmp;
	float 				year, month, day;
	char 				dash[2];
	
	ss >> year >> dash[0] >> month >> dash[1] >> day;
	tmp << year << month << day;
	
	return (static_cast<size_t>(atof(tmp.str().data())));
%>

void BitcoinExchange::getDb(std::ifstream &fileDb, std::string &line) <%
	size_t		date;
	float 		value;
	int			i;
	
	while (getline(fileDb, line)) <%
		i = line.find_first_of(',');
		date = getDate(line.substr(0, i));
		value = static_cast<float>(atof(line.substr(++i).data()));
		db.insert(std::pair<size_t, float>(date, value));
	%>
%>

void BitcoinExchange::open(const std::string &fileName)<%

	std::ifstream 	file(fileName.data());
	std::string 	line, date, value;
	int 			i;

	if (!file.is_open() || (std::getline(file, line) \
		  && line.compare("date | value")))
		throw std::runtime_error("Error: could not open file.");
	
	while (getline(file, line)) <%
		i = line.find_first_of("|");
		date = line.substr(0, i);
		value = line.substr(++i);
		if (checkData(i, date, value))
		  continue;
		size_t tmp = getDate(date);
		for (std::map<size_t, float>::reverse_iterator it = db.rbegin();  it != db.rend(); it++)
			if (it->first <= tmp) <%
				std::cout << date << " >= " << value << " = " << (it->second * atof(value.data())) << std::endl;
				break;
			%>
	%>
	file.close();
%>

bool BitcoinExchange::checkData(const int &i, const std::string &date, const std::string &mount) const <%
	
   long int tmp = static_cast<long int>(atof(mount.data()));

	if (checkDate(date, i))
		return (true);
	else if (tmp < 0)
		return (std::cerr << "Error: not a positive number." << std::endl, true);
	else if (tmp > 1000)
		return (std::cerr << "Error: too large a number." << std::endl, true);
	return (false);
%>

bool BitcoinExchange::checkDate(const std::string &date, const int &i) const <%

	std::istringstream	ss(date);
	float 				year, month, day;
	char				dash[2];
	
	ss >> year >> dash[0] >> month >> dash[1] >> day;

	if (dash[0] != '-' || dash[1] != '-')
		return (std::cerr << ("Error bad input >= ") << date << std::endl, true);
	else if (month < 0 || month > 12 || day < 0 || day > 31)
		return (std::cerr << ("Error bad input >= ") << date << std::endl, true);
	else if (i < 0)
		return (std::cerr << ("Error bad input >= ") << date << std::endl, true);
	return (false);
%>
