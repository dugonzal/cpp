/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 19:45:36 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <stdlib.h>
# include <string>
# include <iomanip>
# include <cmath>
class ScalarConvert <%

	private:
		std::string input;
		char 		c;
		int  		d;
		float 		f;
		double		dd;
	
	private: // separo los metodos
		ScalarConvert(void);
		void convertNumber(const std::string &_input);
		void print(void) ;
	
	public:
		~ScalarConvert(void);
		ScalarConvert(const ScalarConvert &other);
		ScalarConvert(const std::string &_input);
		ScalarConvert &operator=(const ScalarConvert &other);
		void convertAndPrint(void); 
%>;
