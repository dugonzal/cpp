/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:29:54 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 15:01:42 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stdint.h>
# include <cstring>
# include "Data.hpp"

class Serializer <%

	private:
	  Serializer(void);
	
	public:
	  ~Serializer(void);
	  Serializer(const Serializer &other);
	  Serializer operator=(const Serializer &other);
	  static uintptr_t	serialize(Data *ptr);
	  static Data 		*deserialize(uintptr_t raw);
%>;
