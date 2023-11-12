/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:59:28 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/12 19:01:17 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

class intern <%
	private:

	public:
	  intern(void);	
	  ~intern(void);	
	  intern(const intern &other);	
	  intern &operator=(const intern &other);
%>;
