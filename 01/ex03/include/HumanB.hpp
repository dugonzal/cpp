
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:55:15 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/08/08 17:00:31 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
	  std::string	name;
	  Weapon		*weapon;

	public:
	  HumanB( std::string const str);
	  ~HumanB( void );
	  void	setWeapon( Weapon &_weapon );
	  void	attack( void );
};

#endif
