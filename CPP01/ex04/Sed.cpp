#include "Sed.hpp"

int	Sed::replace_text(char **av)
{
	std::string infile(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ifstream inputFile(infile.c_str());

	if (!inputFile.is_open())
	{
		std::cerr << "File can't be open !" << std::endl;
		return (1);
	}

	std::vector <std::string> lignes;
	std::string line;


	std::string newFile = infile + ".replace";
	std::ofstream outputFile(newFile.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "File can't be create !" << std::endl;
		return (1);
	}
	
	while (getline(inputFile, line))
	{
		size_t	i = 0;
		while ((i = line.find(s1, i)) != std::string::npos)
		{
			line.replace(i, s1.length(), s2);
			i += s2.length();
		}
		lignes.push_back(line);
		outputFile << line;
		if (!outputFile.eof())
			outputFile << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

