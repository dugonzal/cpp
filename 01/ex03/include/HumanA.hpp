/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:58:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/04 00:55:02 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanAclass_HPP
#define HumanAclass_HPP

# include "Weapon.hpp"
# include <string>

class HumanA {
  private:
	//Weapon weapon;
	Weapon &weapon;
	std::string name;
  public:
	HumanA( std::string const str, Weapon &weaponObj );
	~HumanA( void );
	void	attack( void );
};

#endif
