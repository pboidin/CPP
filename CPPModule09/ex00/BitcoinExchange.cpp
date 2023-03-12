#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &str) : _str(str) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
    if (this != &rhs)
        this->_str = rhs._str;
    return *this;
}

void    BitcoinExchange::SaveData() {
    std::string         date;
    double              value;
    std::istringstream  line(_str);
    std::string         n;
    int                 i = 0;

    while (std::getline(line, n, ' '))
    {
        if (i == 0) {
            if (!CheckDate(n))
                return ;
			date = n;
        }
		if (i == 1 && n != "|") {
			std::cout << "Error: Input is wrong: " << _str << std::endl;
		}
		if (i == 2) {
			if (!CheckValue(n))
				return ;
			std::istringstream(n) >> value;
		}
		i++;
    }

	if (i != 3) {
		std::cout << "Error: Input is wrong: " << _str << std::endl;
		return ;
	}

	std::cout << "date = " << date << " value = "  << value << std::endl;
}

bool    BitcoinExchange::CheckDate(const std::string &str) {
    if (str.back() == '-') {
		std::cout << "Error: .\n";
		return false;	
	}

	std::string n;
	std::istringstream line(str);
	int	year, month, day;
	int i = 0;

	while (std::getline(line, n, '-')) {
		if (i == 0) {
			std::istringstream(n) >> year;
			if (year < 2010 || year > 2022) {
				std::cout << "Error: incorrect year.\n";
				return false;
			}
		}
		if (i == 1) {
			std::istringstream(n) >> month;
			if (month < 1 || month > 12) {
				std::cout << "Error: incorrect month.\n";
				return false;
			}
		}
		if (i == 2) {
			std::istringstream(n) >> day;
			if (day < 1 || day > 31) {
				std::cout << "Error: incorrect day.\n";
				return false;
			}
			if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)) {
				std::cout << "Error: incorrect day.\n";
				return false;
			}
			if (day > 28 && month == 2) {
				std::cout << "Error: incorrect day.\n";
				return false;
			}
		}
		i++;
	}
	if (i != 3) {
		std::cout << "Error: date incorect\n";
		return false;
	}
	return true;
}

bool	is_Num(const std::string &str)
{
	if (!str.empty() && str.find_first_not_of("0123456789.-") != std::string::npos)
		return false;
	return true;
}

bool	BitcoinExchange::CheckValue(const std::string &str)
{
	if (!is_Num(str) || !str.find('.', 0) || str.back() == '.') {
		std::cout << "Error: not a Number\n";
		return false; 
	}
	if (str < "0") {
		std::cout << "Error: not a positive number.\n";
		return false;
	}
	if (str.length() > 11 || (str.length() == 10 && str > "2147483647")) {
		std::cout << "Error: too large a number.\n";
		return false;
	}
	return true;
}

const std::string BitcoinExchange::PrintQueue() const
{
	return _str;
}