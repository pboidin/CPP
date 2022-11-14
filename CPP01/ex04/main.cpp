#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

std::string	ft_replace(std::string filename, std::string s1, std::string s2)
{
	for (int i = 0; filename[i]; i++)
	{
		if (filename[i] == s1[0])
		{
			if (filename.substr(i, s1.size()) == s1)
			{
				filename.erase(i, s1.size());
				filename.insert(i, s2);
				i += s2.size() - 1;
			}
		}
	}
	return (filename);
}

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		arg1 = argv[1];
	std::string		arg = arg1 + ".replace";
	std::fstream	s1;
	std::fstream	s2;
	const char		*convert = arg.c_str();

	if (argc != 4 || argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
	{
		std::cerr << "Invalid Number of Arguments" << std::endl;
		return (1);
	}
	s1.open(argv[1] + std::ios::in);
	if (!s1)
	{
		std::cout << "Error: file " << argv[1] << " not found" << std::endl;
		return (1);
	}
	s2.open(convert, std::ios::out);
	if (!s2)
	{
		std::cout << "Error: file " << argv[1] << ".replace can't be create" << std::endl;
		return (1);
	}
	while (!s1.eof())
	{
		getline(s1, filename);
		s2 << ft_replace(filename, argv[2], argv[3]) << std::endl;
	}
	std::cout << argv[1] << " has been replaced !" << std::endl;
	s1.close();
	s2.close();
	return (0); 
}
