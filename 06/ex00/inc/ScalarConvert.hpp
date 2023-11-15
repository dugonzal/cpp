/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 21:06:13 by Dugonzal         ###   ########.fr       */
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
		void convertNumber(const std::string &_input);
		void print(void) ;
		void number(void);
		void ascii(void);
	public:
		~ScalarConvert(void);
		ScalarConvert(const ScalarConvert &other);
		ScalarConvert(const std::string &_input);
		ScalarConvert &operator=(const ScalarConvert &other);
		void convertAndPrint(void); 
%>;
