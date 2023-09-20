/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:39:42 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/08/26 14:16:17 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

static void ft_menu(void)
{
	std::cout << "\n\t\t\t***Welcome your PHONEBOOK***\n";
	std::cout << "1-ADD\n";
	std::cout << "2-SEARCH\n";
	std::cout << "3-EXIT\n";	
}

int main()
{
	std::string op;
	bool  menu = 1;
	system("clear");
	PhoneBook miPhoneBook;
	Contact miContacto = Contact(1, true, "S", "D", "SD", "123");
	while (menu)
	{
		ft_menu();
		std::cin >> op;
		if (op == "ADD" || op == "1")			op = '1';
		else if	(op == "SEARCH" || op == "2")	op = '2';
		else if	(op == "EXIT" || op == "3")		op = '3';
		else									op = '4';
		switch(op[0])
		{
			case '1':
			{

				std::cout << "\n\t\t\t***ADD***\n";
				
				break ;
			}
			case '2':
			{

				std::cout << "\n\t\t\t***SEARCH***\n";
				break ;
			}
			case '3':
			{

				system("clear");
				std::cout << "\n\t\t\t***EXIT***\n";
				menu = 0;
				break ;
			}
			default :
			{
				std::cout << "Seleciona una opcion\n";	
				system("clear");
				std::cout << "\n\t\t\t[ERROR de entrada]\n";
			}
		}
	}

}
