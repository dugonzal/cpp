/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:29:48 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:52:14 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include "Base.hpp"

class C: public Base <%
	public:
		C(void);
		~C(void);
		C(const C &other);
		C &operator=(const C &other);


%>;
