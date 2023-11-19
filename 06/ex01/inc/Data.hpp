/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:29:54 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 14:54:35 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdint.h>
# include <cstring>

class Data <%
	private:
		std::string name;
		std::string lastName;
		int			age;

	public:
		Data(void);
		Data(std::string _name, std::string _lastName, int _age);
		~Data(void);
		Data(const Data &other);
		Data &operator=(const Data &other);
		std::string &getName(void);
		std::string &getLastName(void);
		int			getAge(void);
%>;


std::ostream &operator<<(std::ostream &os,Data &other);
