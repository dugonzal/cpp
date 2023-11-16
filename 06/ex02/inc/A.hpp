/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:28:31 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 13:38:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "./Base.hpp"

class A: public Base <%
	public:
	  A(void);
	  virtual ~A(void);
	  A(const A &other);
	  A &operator=(const A &other);
%>;
