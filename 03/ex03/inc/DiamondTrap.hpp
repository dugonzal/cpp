/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:20:43 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/23 13:46:00 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap:  public FragTrap, public ScavTrap <%
	
	private:
		string name;
	
	public:
		DiamondTrap( void );
		~DiamondTrap( void );
		DiamondTrap( const string &n );
		DiamondTrap( const DiamondTrap &other );
		const DiamondTrap &operator=( const DiamondTrap &other );
		void	whoAmi( void );
		virtual void attack(const std::string& target);
%>;

#endif
