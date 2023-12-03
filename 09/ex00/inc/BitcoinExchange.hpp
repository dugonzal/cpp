/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:06:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 16:48:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <fstream>
# include <ctime>
# include <cstdlib>
# include <map>
# include <sstream>


class BitcoinExchange <%
	private:
		std::map<std::string, std::string> db;
	
	private:
		void parserData(std::ifstream &fileDb,  std::string &line);
		void checkData(const std::string &date, const std::string &mount);
		void checkDate(const std::string &date) const ;
		
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);

%>;
