#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>

class btc {
	public:
		btc(std::ifstream& infile, std::ifstream& txtfile);
		btc(const btc& other);
		~btc();
		btc& operator=(const btc& other);
		void print_values() const;
	private:
		std::map<std::string, double> btc_values;
		void load_btc_data(std::ifstream& infile);
		double get_btc_value(const std::string& date) const;
};

#endif