/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:36:49 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/27 20:48:05 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
#include <stdlib.h>
class phoneBook {
  public:
  phoneBook (void); // constructor 
  ~phoneBook (void); // Destructor

  void Book(void);
  private:
	int _nbContact;
};

#endif
