#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <exception>
#include <cstdlib>
# include <stdlib.h>

class Btc {
	public:
		Btc(std::ifstream& infile, std::ifstream& txtfile);
		Btc(const Btc& other);
		~Btc();
		Btc&							operator=(const Btc& other);
		void							PrintValues() const;

	private:
		std::map<std::string, double>	btc_values;
		void							LoadBtcData(std::ifstream& infile);
		double							GetBtcValue(const std::string& date) const;
		bool							dateFinder(const std::string &date);
};

#endif