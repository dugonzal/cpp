/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:33:03 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 11:46:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

uintptr_t serialize(Data *ptr) <%
	return (reinterpret_cast<uintptr_t>(ptr));
%>

Data *deserialize(uintptr_t raw) <%
  return (reinterpret_cast<Data *>(raw));
%>
