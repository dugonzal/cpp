/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:05:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/07 20:41:11 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <list>
# include <ctime>
# include <unistd.h>
# include <cstring>
# include <cstdlib>
# include <climits>
# include <algorithm>
# include <iomanip>
# include <algorithm>

class PmergeMe <%

	private:
		mutable std::vector<int>	a;
		mutable std::list<int>		b;
	
	private:
		PmergeMe(void);
		
		template <class T>
		void	printData(const T &begin, const T &end, const std::string &message) const;
		template <class iter>
		bool	isSorted(const iter &begin, const iter end) const;
		void	parser(const char *str, int const &len) const;
		void	mergeInsertSortVector(void);
	public:
		~PmergeMe(void);
		PmergeMe(const char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		void print(void);
%>;
