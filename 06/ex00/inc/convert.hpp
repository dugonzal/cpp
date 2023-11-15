/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 15:17:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <stdlib.h>
# include <sstream>
# include <string>

class convert <%

	private:
		std::string input;
		char 		c;
		int  		d;
		float 		f;
		double		dd;
		convert(void);
		void convertNumber(const std::string &_input);

	public:
		~convert(void);
		convert(const convert &other);
		convert(const std::string &_input);
		convert &operator=(const convert &other);
  %>;
