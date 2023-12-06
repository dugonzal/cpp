/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:05:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 21:07:04 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include <ctime>
# include <unistd.h>
# include <cstring>
# include <cstdlib>

class PmergeMe <%


	private:
	  mutable std::vector<int>	a;
	  mutable std::list<int>	b;
	
	private:
	  PmergeMe(void);
	  void parser(const char *str, int const &len) const;
	public:
	  ~PmergeMe(void);
	  PmergeMe(const char **av);
	  PmergeMe(const PmergeMe &other);
	  PmergeMe &operator=(const PmergeMe &other);
%>;
