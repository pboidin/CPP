#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <queue>
# include <sstream>
# include <fstream>
# include <string>

class BitcoinExchange
{
	private:
		std::string	_str;
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string &str);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &rhs);

		bool				CheckDate(const std::string &str);
		bool				CheckValue(const std::string &str);
		const std::string	PrintQueue() const;
		void				SaveData();
};

#endif