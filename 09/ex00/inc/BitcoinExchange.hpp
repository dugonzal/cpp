/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:06:34 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/03 17:49:47 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <fstream>
# include <ctime>
# include <cstdlib>
# include <map>
# include <climits>
# include <sstream>


class BitcoinExchange <%
	private:
		std::map<std::string, std::string> db;
	
	private:
		void getDb(std::ifstream &fileDb,  std::string &line);
		bool checkData(const int &i, const std::string &date, const std::string &mount)const ;
		bool checkDate(const std::string &date, const int &i) const ;
		
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		void open(const std::string &fileName);
%>;
