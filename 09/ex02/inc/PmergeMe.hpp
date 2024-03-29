/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:05:04 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/09 10:36:14 by Dugonzal         ###   ########.fr       */
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
# include <deque>

class PmergeMe <%

	private:
		mutable std::vector<int>	a;
		mutable std::deque<int>		b;
	
	private:
		PmergeMe(void);
		
		template <typename T>
		void	printData(const T &begin, const T &end, const std::string &message) const;
		
		template <typename iter>
		bool	isSorted(const iter &begin, const iter &end) const;
		
		template <typename T>
		void	mergeInsertSort(T &arr);
		void	parser(const char *str, int const &len) const;
	
	public:
		~PmergeMe(void);
		PmergeMe(const char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		void 	print(void);
%>;
