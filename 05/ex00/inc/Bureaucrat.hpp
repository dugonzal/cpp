/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:40:26 by dugonzal          #+#    #+#             */
/*   Updated: 2023/10/24 14:43:23 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat <%
	private:
		const std::string name;
		const int grade;
	public:
		Bureaucrat( void);
		Bureaucrat( void);
%>;

#endif
