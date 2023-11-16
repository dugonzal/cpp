/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:29:54 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 11:23:13 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
#include <stdint.h>

typedef struct s_Data <%

	const char 	*name;
	std::string	lastName;
	int			age;

%>Data;

uintptr_t	serialize(Data *ptr);
Data 		*deserialize(uintptr_t raw);
