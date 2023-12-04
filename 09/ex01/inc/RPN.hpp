/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:24:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/04 20:47:57 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>

class RPN <%

	private:
		RPN(void);
		~RPN(void);
	
	private:
		mutable std::stack<int> list;
	
	private:

	public:
		RPN(const RPN &other);
		RPN	&operator=(const RPN &other);
		static void open(const char **av, int const &ac);



%>;
