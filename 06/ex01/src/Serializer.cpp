/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:33:43 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/11/19 15:01:25 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Serializer.hpp"

Serializer::Serializer(void) <% %>

Serializer::~Serializer(void) <% %>

Serializer::Serializer(const Serializer &other) <% *this = other; %>

Serializer Serializer::operator=(const Serializer &other) <% return (other); %>

Data *Serializer::deserialize(uintptr_t raw) <%
	return (reinterpret_cast<Data *>(raw));
%>

uintptr_t Serializer::serialize(Data *ptr) <%
	return (reinterpret_cast<uintptr_t>(ptr));
%>
