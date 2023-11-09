/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:05:45 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/09 12:09:02 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm <%
	public:
	  ShrubberyCreationForm(void);
	  ~ShrubberyCreationForm(void);
	  ShrubberyCreationForm(const ShrubberyCreationForm &other);
	  const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
%>;
