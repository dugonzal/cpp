/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:44:52 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/12/02 16:42:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main() {
    MutantStack<int> tmp;

    tmp.push(1);
    tmp.push(2);
    tmp.push(3);

    MutantStack<int>::iterator it;
    for (it = tmp.begin(); it != tmp.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    tmp.push(1);
    tmp.push(1);
    tmp.push(1);
    MutantStack<int>::reverse_iterator rit;
    for (rit = tmp.rbegin(); rit != tmp.rend(); ++rit) {
        std::cout << *rit << " ";
    }

    std::cout << "\n";

    tmp.push(2);
    tmp.push(2);
    tmp.push(2);
    const MutantStack<int> constStack = tmp;

    MutantStack<int>::const_iterator cit;
    for (cit = constStack.begin(); cit != constStack.end(); ++cit) {
        std::cout << *cit << " ";
    }
    const MutantStack<int> rconstStack = tmp;
    
	MutantStack<int>::const_reverse_iterator rcit;
    
	std::cout << "\n";

    tmp.push(3);
    tmp.push(3);
    tmp.push(3);
	for (rcit = rconstStack.rbegin(); rcit != rconstStack.rend(); ++rcit)
		  std::cout << *rcit << " ";
    return 0;
}
