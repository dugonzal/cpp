/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:28:44 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/09/22 15:21:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	CLAPTRAP_HPP
# define 	CLAPTRAP_HPP

# include <iostream>
# include <unistd.h>

using std::cout;
using std::endl;
using std::string;

class ClapTrap <%
	
	private:

		string	name;
		int 	hitPoint; // life point 
		int 	energyPoint;  
		int 	attackDamage;  
	
	public:

		ClapTrap( void );
		ClapTrap( std::string _name );
		ClapTrap( const ClapTrap &other );
		~ClapTrap( void ); 
		const ClapTrap &operator=(const ClapTrap &other);
//ClapTrap <name> attacks <target>, causing <damage> points of damage!
		void 	attack(const string &target);
		void 	takeDamage(unsigned int amount);// ¿puede ser que estable attackDamage?
		void 	beRepaired(unsigned int amount);
		const string	&getName( void ) const ;
		int		getHitPoint( void ) const;
		int		getEnergyPoint( void ) const;
		int		getAttackDamage( void ) ;
		void	setHitPoint( int const hp ) ;
		void	setEnergyPoint( int const ep );
		void	setAttackDamage( int const ad );
		void	setName( const string &_name );
%>;

#endif
