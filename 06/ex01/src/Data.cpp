/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:33:03 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/16 12:33:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Data.hpp"

uintptr_t	serialize(Data *ptr) <%
//	uintptr_t tmp;

//	return (std::memcpy(&tmp, &ptr, sizeof(ptr)), tmp);
	return (reinterpret_cast<uintptr_t>(ptr));
%>

Data	*deserialize(uintptr_t raw) <%
//	Data *tmp;

//	return (std::memcpy(&tmp, &raw, sizeof(raw)), tmp);
	return (reinterpret_cast<Data *>(raw));
%>
