#include <iostream>
#include <string>
#include <fstream>

static int	ft_replace(std::string orig, std::string filename, std::string repl)
{
	std::ifstream			file_in(filename);
	std::ofstream			file_out(filename + ".replace");
	std::string::size_type	start;
	int						stop;
	std::string				buff;
	std::string::size_type	pos;

	if (!file_out)
	{
		std::cerr << filename + ".replace cannot be created" << std::endl;
		return (1);
	}
	if (!file_in)
	{
		remove((filename + ".replace").c_str());
		std::cerr << filename + " cannot be opened" << std::endl;
		return (1);
	}
	while (1)
	{
		start = 0;
		stop = getline(file_in, buff).eof();
		pos = buff.find(orig, start);
		while (pos != std::string::npos)
		{
			buff.erase(pos, orig.length());
			buff.insert(pos, repl);
			start = pos + repl.length();
			pos = buff.find(orig, start);
		}
		file_out << buff;
		if (stop)
			break;
		file_out << std::endl;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	std::string	filename;

	if (argc != 4)
	{
		std::cerr << "Invalid Number of Arguments" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cerr << "Input find strings are empty" << std::endl;
		return (1);
	}
	filename = argv[1];
	return (ft_replace(std::string(argv[2]), filename, std::string(argv[3])));
}