#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>
#include <stdlib.h>

class btc {
	public:
		btc(std::ifstream& infile, std::ifstream& txtfile);
		btc(const btc& other);
		~btc();
		btc&							operator=(const btc& other);
		void							PrintValues() const;

	private:
		std::map<std::string, double>	btc_values;
		void							LoadBtcData(std::ifstream& infile);
		double							GetBtcValue(const std::string& date) const;
};

#endif