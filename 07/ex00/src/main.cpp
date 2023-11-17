/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:48:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/17 08:10:56 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

int	main(void) <%

	char a = 'd';
	int  n = 65;
	std::cout << ::min<int>(a) << std::endl;
	std::cout << ::min<char>(n) << std::endl;
	return (0);
%>
