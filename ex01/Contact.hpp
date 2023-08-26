/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:39:49 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/08/26 14:23:25 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		int			_index;
		std::string	_firtName;
		std::string	_lastName;
		std::string _nickName;
		std::string _phone;
		bool		_secret;

		// void	set_FirtName();
		// void	set_LastName();
		// void	set_Nick();
		// void	set_Phone();
		// void	set_Secret();

	public:
		Contact(int index, bool secret, std::string firtName, std::string lastName,
					std::string nickName, std::string phone);
		~Contact();
		// std::string get_FirtName();
		// std::string get_LastName();
		// std::string get_Nick();
		// std::string get_Phone();
		// std::string get_Secret();
};

#endif
