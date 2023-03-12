#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
        std::cout << "Error: could not open file.\n";
	std::queue<BitcoinExchange> bit;
	std::ifstream configfile(argv[1]);
	std::string read;

	while(getline(configfile, read)) {
        BitcoinExchange b(read);
        bit.push(b);
    }

	while(!bit.empty()) {
		bit.front().SaveData();
		bit.pop();
	}
}
