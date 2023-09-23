/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:34:26 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/02 21:25:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
#define	HARL_HPP

#include <iostream>

class Harl {
	private:
	  void	debug ( void );
	  void	info ( void );
	  void	warning ( void );
	  void	error ( void );
	public:
	  Harl( void );
	  ~Harl( void );
	  void	complain( std::string level );
};

#endif
