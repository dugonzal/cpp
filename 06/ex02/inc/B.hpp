/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:29:18 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:46:07 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include "Base.hpp"

class B: public Base <%
	
	public:
		B(void);
		~B(void);
		B(const B &other);
		B &operator=(const B &other);
%>;
