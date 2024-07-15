#include <iostream>
#include <fstream>
#include <vector>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Number of arg is not good !" << std::endl;
		return (1);
	}
	else
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
				size_t end_i = i + s1.length();
				std::string sub = line.substr(end_i);
				line.erase(i);
				line.insert(i, s2);
				i += s2.length();
				line.insert(i, sub);
				i += sub.length();
			}
			lignes.push_back(line);
			outputFile << line;
			if (!outputFile.eof())
				outputFile << std::endl;
		}
		inputFile.close();
		outputFile.close();
		
	}
	return (0);
}