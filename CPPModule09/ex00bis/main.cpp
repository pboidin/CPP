#include "BitcoinExchange.hpp"

/*
// Define the main function
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Error: no file specified." << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::ifstream infile(filename.c_str());
    if (!infile) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }

    // Populate the btc instance from the CSV file
    btc myBtc;
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        double rate;
        char sep;
        if (!(iss >> dateStr >> sep >> rateStr) || sep != ',' || iss.fail()) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::istringstream rateIss(rateStr);
        if (!(rateIss >> rate) || rateIss.fail()) {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        myBtc.setRate(dateStr, rate);
    }

    // Read the input file and compute the converted values
    std::ifstream inputfile("input.txt");
    if (!inputfile) {
        std::cout << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::string inputLine;
    while (std::getline(inputfile, inputLine)) {
        std::istringstream inputIss(inputLine);
        std::string dateStr, valueStr;
        double value;
        char sep;
        if (!(inputIss >> dateStr >> sep >> valueStr) || sep != '|' || inputIss.fail()) {
            std::cout << "Error: bad input => " << inputLine << std::endl;
            continue;
        }
        std::istringstream valueIss(valueStr);
        if (!(valueIss >> value) || valueIss.fail()) {
            std::cout << "Error: bad input => " << inputLine << std::endl;
            continue;
        }
        if (value <= 0.0 || value > 1000.0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        double rate = myBtc.getRate(dateStr);
        if (rate < 0.0) {
            std::cout << "Error: no rate found for date " << dateStr << std::endl;
            continue;
        }
        double convertedValue = value * rate;
        if (convertedValue > 1000000000.0) {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        std::cout << dateStr << " => " << value << " = " << convertedValue << std::endl;
    }

    return 0;
}

*/

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: Invalid number of arguments.\n";
        return 1;
    }

    std::ifstream datafile("data.csv");
    if (!datafile) {
        std::cerr << "Error: Could not open data file.\n";
        return 1;
    }

    std::ifstream txtfile(argv[1]);
    if (!txtfile) {
        std::cerr << "Error: Could not open txt file.\n";
        datafile.close();
        return 1;
    }

    btc bitcoin(datafile, txtfile);
    bitcoin.print_values();

    datafile.close();
    txtfile.close();
    return 0;
}
