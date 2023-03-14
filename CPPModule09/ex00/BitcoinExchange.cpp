#include "BitcoinExchange.hpp"

btc::btc(std::ifstream& infile, std::ifstream& txtfile) {
    LoadBtcData(infile);

    std::string line;

    while (std::getline(txtfile, line)) {
        std::istringstream  iss(line);
        std::string         date_str;
        double              value;
        int                 i = 0;

        while (!iss.eof()) {
            getline(iss, line, '|');
            if (i == 0)
                date_str = line.substr(0, line.size()-1);
            else
                value = atof(line.c_str());
            i++;
        }
        double btc_value = GetBtcValue(date_str);
        if (btc_value == -1) {
            std::cerr << "Error: bad input => " << date_str << std::endl;
            continue;
        }
        if (value < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        double exchange_rate = value * btc_value;
        std::cout << date_str << " => " << value << " = " << exchange_rate << std::endl;
    }
}

btc::btc(const btc& other) {
    btc_values = other.btc_values;
}

btc::~btc() {}

btc& btc::operator=(const btc& other) {
    if (this != &other) {
        btc_values = other.btc_values;
    }
    return *this;
}

void btc::PrintValues() const {
    for (std::map<std::string, double>::const_iterator it = btc_values.begin(); it != btc_values.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void btc::LoadBtcData(std::ifstream& infile) {
    std::string line;
    
    while (std::getline(infile, line)) {
        std::istringstream  iss(line);
        std::string         date_str;
        double              value;
        int                 i = 0;

        while (!iss.eof()) {
            getline(iss, line, ',');
            if (i == 0)
                date_str = line;
            else
                value = atof(line.c_str());
            i++;
        }
        if (date_str == "") {
            std::cerr << "Error: Database can't be empty => " << line << std::endl;
            break;
        }
        if (value < 0) {
            std::cerr << "Error: invalid value => " << value << std::endl;
            break;
        }
        btc_values[date_str] = value;
    }
}

double btc::GetBtcValue(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = btc_values.find(date);
    if (it == btc_values.end()) {
        return -1;
    }
    return it->second;
}