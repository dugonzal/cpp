/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:34:47 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 15:31:44 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap <%

	public:
	  FragTrap( void );
	  ~FragTrap( void );
	  FragTrap( const FragTrap &other );
	  FragTrap( const string &_name );
	  const FragTrap &operator=( const FragTrap &other );
	  void highFivesGuys(void);
%>;

#endif
