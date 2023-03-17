#include "BitcoinExchange.hpp"

Btc::Btc(std::ifstream& infile, std::ifstream& txtfile) {
    LoadBtcData(infile);

	std::string	first_line;
    std::string line;

	std::getline(txtfile, first_line);
	if (first_line.compare("date | value")) {
		std::cerr << "Error: First Line is not 'date | value'." << std::endl;
		exit(1);
	}

    while (std::getline(txtfile, line)) {
		std::istringstream 	iss(line);
		std::string			date_str;
		std::string			value;
		char				sep;
		double				exchange_rate;

		if(!(iss >> date_str >> sep >> value) || sep != '|')
			std::cerr << "Error: bad input => " << date_str << std::endl;
		else if (!dateFinder(date_str))
			std::cerr << "Error: bad input => " << date_str << std::endl;
		else if (std::atof(value.c_str()) < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else if (std::atof(value.c_str()) > 1000)
			std::cerr << "Error: too large a number." << std::endl;
		else if (std::atof(value.c_str()) > 0 || std::atof(value.c_str()) < 1000) {
			exchange_rate = std::atof(value.c_str()) * GetBtcValue(date_str);
			std::cout << date_str << " => " << value << " = " << exchange_rate << std::endl;
		}
		else
			std::cerr << "Error: bad input => " << date_str << std::endl;
   }
}

Btc::Btc(const Btc& other) {
    btc_values = other.btc_values;
}

Btc::~Btc() {}

Btc& Btc::operator=(const Btc& other) {
    if (this != &other) {
        btc_values = other.btc_values;
    }
    return *this;
}

void Btc::PrintValues() const {
    for (std::map<std::string, double>::const_iterator it = btc_values.begin(); it != btc_values.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void Btc::LoadBtcData(std::ifstream& infile) {
    std::string line;
    
    std::getline(infile, line);
    while (std::getline(infile, line)) {
        std::istringstream  iss(line);
        std::string         date_str, value;
        double              double_value;
        std::getline(iss, date_str, ',');
        std::getline(iss, value, ',');
		double_value = std::atof(value.c_str());

        if (date_str == "") {
            std::cerr << "Error: Database can't be empty => " << line << std::endl;
            break;
        }
        if (double_value < 0) {
            std::cerr << "Error: invalid value => " << value << std::endl;
            break;
        }
        btc_values[date_str] = std::atof(value.c_str());
    }
}

std::string	dayBefore(std::string date) {
    int	year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

    int prev_day = day - 1;
    int prev_month = month;
    int prev_year = year;
    if (prev_day == 0) {
        prev_month = month - 1;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year = year - 1;
            if (prev_year < 2009) {
                return "not valid year";
            }
        }
        switch (prev_month) {
            case 2:
                if (prev_year % 4 == 0 && (prev_year % 100 != 0 || prev_year % 400 == 0)) {
                    prev_day = 29;
                } else {
                    prev_day = 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                prev_day = 30;
                break;
            default:
                prev_day = 31;
        }
    }

	std::stringstream	ss;
    std::string		prev_date;
	ss << prev_year;
	ss << "-";
    if (prev_month < 10)
        ss << "0";
    ss << prev_month;
    ss << "-";
    if (prev_day < 10) {
        ss << "0";
	}
	ss << prev_day;
	ss >> prev_date;
    return (prev_date);
}

double Btc::GetBtcValue(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = btc_values.find(date);
    if (it != btc_values.end()) {
        return it->second;
    } else {
		std::string	previous = dayBefore(date);
		return GetBtcValue(previous);
	}
}

bool	Btc::dateFinder(const std::string& date) {
    if (date.length() != 10) {
        return false;
    }

    int year, month, day;
    char sep1, sep2;
    std::istringstream iss(date);
    iss >> year >> sep1 >> month >> sep2 >> day;
    if (iss.fail() || sep1 != '-' || sep2 != '-' || year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    bool check_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if ((month == 2 && (check_year ? day > 29 : day > 28)) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
		std::cerr << "Date doesn't exist" << std::endl;
        return false;
    }

    return true;
}