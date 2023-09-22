/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:15:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 13:10:16 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap, string <%
	  
	private:
		  string	name;
		  int		hitPoint;
		  int		energyPoint;
		  int		attackDamage;

	public:

		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( string _name );
		ScavTrap( const ScavTrap &other );
		const ScavTrap &operator=( const ScavTrap & other );
		void	guardGate( void );
		string	getName( void ) const;
		int		getHitPoint( void ) const;
		int		getEnergyPoint( void ) const;
		int		getAttackDamage( void ) const;

%>;

#endif
