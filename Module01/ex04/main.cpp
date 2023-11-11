#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Argumentos no validos" << std::endl;
		return 0;
	}
	std::ifstream infile(argv[1]);
	std::string argv1(argv[1]);
	std::string argv2(argv[2]);
	std::string argv3(argv[3]);
	std::ofstream outfile(argv1  + ".remplace");

	if (infile.is_open() || outfile.is_open())
	{
		std::string line;
		std::string result;
		int pos;
		while (std::getline(infile, line))
		{
			while (line.find(argv2) != std::string::npos)
			{
				pos = 0;
				pos += line.find(argv2);
				result += line.substr(0, pos);
				result += argv3;
				pos += argv2.size();
				//result += line.substr(pos);
				line = line.substr(pos);
			}
			result += line;
			outfile << result;
			outfile << "\n";
			result.erase();
		}
		infile.close();
		outfile.close();
	}
	else
		std::cout << "Error file" << std::endl;

	
}