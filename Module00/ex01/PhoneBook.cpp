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

int PhoneBook::_lastId = 0;

PhoneBook::PhoneBook() : _contacts(8)
{
}

PhoneBook::~PhoneBook()
{
}
//GETs
void	PhoneBook::get_Contacts(){
	if (_contacts.empty()) {
        std::cout << "No contacts" << std::endl;
    } else
	{
		std::cout << "Index\t\tFirtName\t\tLastName\t\tNick" << std::endl;
    	for (std::vector<Contact>::iterator it = _contacts.begin(); it != _contacts.end(); ++it)
		{
            Contact& contact = *it;
			if (contact.get_Index() == -1)
				return ;
			std::string temp;
			std::cout << "|" << contact.get_Index() << "|\t\t";
			temp = contact.get_FirtName();
			if (temp.size() <= 10)
				std::cout << "|" << contact.get_FirtName() << "|\t\t";
			else 
				ft_truc_str(contact.get_FirtName());
			temp = contact.get_LastName();
			if (temp.size() <= 10)
				std::cout << "|" << contact.get_LastName() << "|\t\t";
			else 
				ft_truc_str(contact.get_LastName());
			temp = contact.get_Nick();
			if (temp.size() <= 10)
				std::cout << "|" << contact.get_Nick() << "|";
			else 
				ft_truc_str(contact.get_Nick());
			std::cout << std::endl;
        }
    }
}
void	PhoneBook::get_Contact(){
	if (_contacts[0].get_Index() == -1)
		return ;
	std::string temp;
	int index;
	std::cout << "Num:" << std::endl;
	std::cin >> temp;

	index = std::atoi(temp.c_str());
	if (index >= 0 && index <= 7 && _contacts[index].get_Index() != -1)
	{
		std::cout << "FirtName: |"	<< _contacts[index].get_FirtName()	<< "|";
		std::cout << "LastName: |"	<< _contacts[index].get_LastName()	<< "|\t";
		std::cout << "Nick: |" 	<< _contacts[index].get_Nick()			<< "|\t";
		std::cout << "Phone: |"	<< _contacts[index].get_Phone()			<< "|" << std::endl;
	}
	else
		std::cout << "Fuera de Rango" << std::endl;
}
//SETs
void	PhoneBook::add_Contact()
{
	std::cout << "\n\t\t\t***ADD***\n";
	std::string secret;
	std::string firtName;
	std::string lastName;
	std::string nickName;
	std::string phone;
	std::cout << "FirtName:" << std::endl;
	std::cin >> firtName;
	std::cout << "LastName" << std::endl;
	std::cin >> lastName;
	std::cout << "NickName" << std::endl;
	std::cin >>nickName;
	std::cout << "phone" << std::endl;
	std::cin >> phone;
	// std::cout << "Is secret" << std::endl;
	// std::cin >> secret;
	if (_lastId == 7)
		_lastId = 0;
	_contacts[_lastId] = (Contact(_lastId, 0, firtName, lastName, nickName, phone));
	_lastId++;
}

void	PhoneBook::ft_truc_str(std::string str)
{
	std::cout << "|"; 
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".|\t\t"; 
}