#include "BitcoinExchange.hpp"

btc::btc(std::ifstream& infile, std::ifstream& txtfile) {
    load_btc_data(infile);

    std::string line;
    while (std::getline(txtfile, line)) {
        std::istringstream iss(line);
        std::string date_str;
        double value;
        if (!(iss >> date_str >> value)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (iss.peek() != EOF) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        double btc_value = get_btc_value(date_str);
        if (btc_value == -1) {
            std::cerr << "Error: invalid date => " << date_str << std::endl;
            continue;
        }
        if (value <= 0) {
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

void btc::print_values() const {
    for (std::map<std::string, double>::const_iterator it = btc_values.begin(); it != btc_values.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

void btc::load_btc_data(std::ifstream& infile) {
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        std::string date_str;
        double value;
        if (!(iss >> date_str >> value)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (iss.peek() != EOF) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (value <= 0) {
            std::cerr << "Error: invalid value => " << value << std::endl;
            continue;
        }
        btc_values[date_str] = value;
    }
}

double btc::get_btc_value(const std::string& date) const {
    std::map<std::string, double>::const_iterator it = btc_values.find(date);
    if (it == btc_values.end()) {
        return -1;
    }
    return it->second;
}