#include "Contact.hpp"


Contact::Contact(int index, bool secret, std::string firtName, std::string lastName,
					std::string nickName, std::string phone)
{
	this->_index = index;
	this->_firtName = firtName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phone = phone;
	this->_secret = secret;
}

Contact::~Contact()
{
	
}
//Set
// void	set_FirtName()
// {

// }
// void	set_LastName()
// {

// }
// void	set_Nick()
// {

// }

//Get
// std::string get_FirtName()
// {
// 	return(_firtName);
// }
// std::string get_LastName()
// {
// 	return(_LastName);
// }
// std::string get_Nick()
// {
// 	return(_nick);
// }
