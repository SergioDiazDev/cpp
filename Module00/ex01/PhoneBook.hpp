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
# include <vector>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook
{
	private:
		std::vector<Contact>	_contacts;
		static int				_lastId;
	public:
		PhoneBook();
		~PhoneBook();

		void	get_Contacts();
		void	get_Contact();
		void	add_Contact();
		void	ft_truc_str(std::string);
		
};

#endif
