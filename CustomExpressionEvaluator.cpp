#include "CustomExpressionEvaluator.h"
#include <iostream>
#include <fstream>

double CustomExpressionEvaluator::calculate() const {
    double result = 0;
    if (numOperands >= 2) {
        result = (operands[0] + operands[1]) / 2;
    }
    for (size_t i = 2; i < numOperands; ++i) {
        result += operands[i];
    }
    return result;
}

void CustomExpressionEvaluator::logToScreen() const {
    for (size_t i = 0; i < numOperands; ++i) {
        if (i > 0) std::cout << " + ";
        std::cout << (operands[i] < 0 ? "(" : "") << operands[i] << (operands[i] < 0 ? ")" : "");
    }
    std::cout << "\nResult = " << calculate() << std::endl;
}

void CustomExpressionEvaluator::logToFile(const std::string& filename) const {
    std::ofstream file(filename, std::ios::app);
    for (size_t i = 0; i < numOperands; ++i) {
        if (i > 0) file << " + ";
        file << (operands[i] < 0 ? "(" : "") << operands[i] << (operands[i] < 0 ? ")" : "");
    }
    file << "\nResult = " << calculate() << "\n";
}