/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:24:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 16:40:42 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>
# include <cstdlib>
# include <cstring>
# include <climits>
# include <cctype>

class RPN <%

	
	private:
		std::stack<int> list;
	
	private:
		bool	aritmetics(char const &c) const;
		void	parser(const std::string &intput); 
		void	operate(const char &operando) ;
	
	public:
		RPN(void);
		~RPN(void);
		RPN(const RPN &other);
		RPN	&operator=(const RPN &other);
		void open(const std::string &input);

%>;
