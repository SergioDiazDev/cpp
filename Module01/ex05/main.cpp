#include <string>
#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("NO VALIDO");
}