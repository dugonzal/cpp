/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:15:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 10:43:36 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap <%
	  private:
		  string	name;
		  int		hitPoints;
		  int		energyPoints;
		  int		attackDamage;
	  public:
		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( string _name );
		ScavTrap( const ScavTrap &other );
		void	guardGate( void );
%>;


#endif
