/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:15:12 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/26 15:04:51 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap <%
	
	public:

		ScavTrap( void );
		~ScavTrap( void );
		ScavTrap( string _name );
		ScavTrap( const ScavTrap &other );
		const ScavTrap &operator=( const ScavTrap & other );
		void	guardGate( void );
		void	attack( void ) const;
	
%>;

#endif
