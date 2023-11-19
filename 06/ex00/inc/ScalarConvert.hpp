/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 12:52:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits>
# include <stdlib.h>

class ScalarConvert <%

	private:
		std::string input;
		char 		c;
		int  		d;
		float 		f;
		double		dd;
	
	private:
		ScalarConvert(void);
		ScalarConvert(const std::string &s);
		void print(void);
		void number(const char *tmp);
		void ascii(char c);
		void convertNumber(const std::string &s);
	public:
		static void convert(const std::string &_input);
		~ScalarConvert(void);
		ScalarConvert(const ScalarConvert &other);
		ScalarConvert &operator=(const ScalarConvert &other);
%>;
