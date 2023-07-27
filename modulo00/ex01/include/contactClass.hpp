/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:09:53 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/07/27 14:36:57 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact {
	public:
	  ~contact();
	  contact();
	  void 			cleanContact( void );
	  void 			createContact( void );
	  void 			searchContact( void );
	  void 			setFirstName( std::string str );
	  void 			setLastName( std::string str );
	  void 			setNickname( std::string str );
	  void 			setPhoneNumber( std::string str );
	  void 			setDarkestSecret( std::string str );
	  std::string 	getFirstName( void );
	  std::string 	getLastName( void );
	  std::string 	getNickName( void );
	  std::string 	truncate(std::string str);
	private:
	  std::string _firstName;
	  std::string _lastName;
	  std::string _nickname;
	  std::string _phoneNumber;
	  std::string _darkestSecret;
};

#endif // CONTACT_CLASS_HPP
