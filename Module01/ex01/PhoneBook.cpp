/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:39:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/08/26 13:36:22 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook(PhoneBook const &copy)
{
/* Class::Class(const Class &copy) : someValue(copy.someValue) {} */
}

PhoneBook	&PhoneBook::operator=(const PhoneBook &copy)
{
	// if (this != &copy) {
		// someValue = copy.someValue;
	// }
	// return *this;
}
