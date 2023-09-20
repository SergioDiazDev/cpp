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

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::get_FirtName()
{
	return(this->_firtName);
}
std::string Contact::get_LastName()
{
	return(this->_lastName);
}
std::string Contact::get_Nick()
{
	return(this->_nickName);
}
std::string Contact::get_Phone()
{
	return(this->_phone);
}

