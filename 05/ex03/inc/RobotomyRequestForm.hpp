/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:49:31 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 16:50:55 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AForm.hpp"
# include <ctime>

class RobotomyRequestForm : public AForm <%

	private:
		std::string target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string _target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		virtual void execute(const Bureaucrat &executor) const;

%>;
