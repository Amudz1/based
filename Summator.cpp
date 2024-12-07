#include "Summator.h"
#include <iostream>
#include <fstream>

double Summator::calculate() const {
    double sum = 0;
    for (size_t i = 0; i < numOperands; ++i) {
        sum += operands[i];
    }
    return sum;
}

void Summator::logToScreen() const {
    for (size_t i = 0; i < numOperands; ++i) {
        if (i > 0) std::cout << " + ";
        std::cout << (operands[i] < 0 ? "(" : "") << operands[i] << (operands[i] < 0 ? ")" : "");
    }
    std::cout << "\nResult = " << calculate() << std::endl;
}

void Summator::logToFile(const std::string& filename) const {
    std::ofstream file(filename, std::ios::app);
    for (size_t i = 0; i < numOperands; ++i) {
        if (i > 0) file << " + ";
        file << (operands[i] < 0 ? "(" : "") << operands[i] << (operands[i] < 0 ? ")" : "");
    }
    file << "\nResult = " << calculate() << "\n";
}