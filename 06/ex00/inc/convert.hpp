/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/15 13:26:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <stdlib.h>
class convert <%

	private:
		std::string input;
		convert(void); // pongo el constructor en privado para que solo se pueda instanciar con el input
		char 		c;
		int  		d;
		float 		f;
		double		dd;

	public:
		~convert(void);
		convert(const convert &other);
		convert(const std::string &_input);
		convert &operator=(const convert &other);
		void convertNumber(std::string input);
  %>;
