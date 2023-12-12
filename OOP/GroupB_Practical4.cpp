#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Output file stream
    std::ofstream outputFile("data.txt");

    // Check if the file is successfully opened
    if (!outputFile.is_open()) {
        std::cerr << "Error opening the output file.\n";
        return 1;
    }

    // Write information to the file
    outputFile << "Name: John Doe\n";
    outputFile << "Age: 25\n";
    outputFile << "Occupation: Programmer\n";

    // Close the output file
    outputFile.close();

    // Input file stream
    std::ifstream inputFile("data.txt");

    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the input file.\n";
        return 1;
    }

    // Read and display information from the file
    std::string line;
    std::cout << "Information from the file:\n";
    while (std::getline(inputFile, line)) {
        std::cout << line << '\n';
    }

    // Close the input file
    inputFile.close();

    return 0;
}
