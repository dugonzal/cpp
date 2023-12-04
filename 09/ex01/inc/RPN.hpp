/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:24:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/04 22:00:03 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>
# include <cstdlib>
# include <cstring>

class RPN <%

	
	private:
		std::stack<int> list;
	
	private:
		void	parser(const char *av, int len); 

	public:
		RPN(void);
		~RPN(void);
		RPN(const RPN &other);
		RPN	&operator=(const RPN &other);
		void open(const char **av, int const &ac);
		void in(std::string &s);


%>;
