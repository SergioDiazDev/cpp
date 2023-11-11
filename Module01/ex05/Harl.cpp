#include "Harl.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << GREEN <<"[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!”" << RESET << std::endl;
}
void	Harl::info( void )
{
	std::cout << MAGENTA << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}
void	Harl::warning( void )
{
	std::cout << YELLOW << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << RESET << std::endl;
}
void	Harl::error( void )
{
	std::cout << RED << "[ERROR] This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void	Harl::complain( std::string level )
{
	std::map<std::string, void (Harl::*)()> mapHarl;
	mapHarl["DEBUG"] = &Harl::debug;
	mapHarl["INFO"] = &Harl::info;
	mapHarl["WARNING"] = &Harl::warning;
	mapHarl["ERROR"] = &Harl::error;

	std::map<std::string, void (Harl::*)()>::iterator it = mapHarl.find(level);
	if (it != mapHarl.end())
		(this->*(it->second))();
	else
		std::cout << BLUE << "Invalid level" << RESET << std::endl;
}