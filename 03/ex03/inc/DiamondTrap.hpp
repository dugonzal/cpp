/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:20:43 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 23:22:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap:  public FragTrap, ScavTrap <%
	
	private:
		string _name;
	
	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( const string &n );
		DiamondTrap( const DiamondTrap &other );
		const DiamondTrap &operator=( const DiamondTrap &other );

%>;

#endif
