/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:05:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/06 19:23:41 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include <ctime>

class PmergeMe <%

	private:
	  PmergeMe(void);

	private:
	  mutable std::vector<int>	a;
	  mutable std::list<int>	b;

	public:
	  ~PmergeMe(void);
	  PmergeMe(const char **av);
	  PmergeMe(const PmergeMe &other);
	  PmergeMe &operator=(const PmergeMe &other);
%>;
