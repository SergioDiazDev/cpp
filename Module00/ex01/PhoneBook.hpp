/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:39:47 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/08/26 14:23:46 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact			_contacts[7];
		static int _lastId;
	public:
		PhoneBook();
		~PhoneBook();
		//GETs
		void	get_Contacts();
		void	get_Contact();
		//SETs
		Contact	set_Contact();

		void	add_Contact();
		
};

#endif
