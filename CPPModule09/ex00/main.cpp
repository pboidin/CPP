#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: Could not open file\n";
        return 1;
    }

    std::ifstream datafile("data.csv");
    if (!datafile) {
        std::cerr << "Error: Could not open data.csv file.\n";
        return 1;
    }

    std::ifstream txtfile(argv[1]);
    if (!txtfile) {
        std::cerr << "Error: Could not open txt file.\n";
        datafile.close();
        return 1;
    }

    Btc bitcoin(datafile, txtfile);
    //bitcoin.PrintValues();

    datafile.close();
    txtfile.close();
    return 0;
}
