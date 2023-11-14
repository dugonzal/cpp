/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:11:07 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/14 20:32:15 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdexcept>
# include <exception>

class convert <%
	private:
		std::string input;
		convert(void); // pongo el constructor en privado para que solo se pueda instanciar con el input

	public:
		~convert(void);
		convert(const convert &other);
		convert(const std::string &_input);
		convert &operator=(const convert &other);
%>;
