#include "ExpressionEvaluator.h"
#include <iostream>
#include <fstream>
#include <algorithm>

ExpressionEvaluator::ExpressionEvaluator(size_t n) 
    : numOperands(n), operands(new double[n]()) {}

ExpressionEvaluator::~ExpressionEvaluator() {
    delete[] operands;
}

void ExpressionEvaluator::setOperand(size_t pos, double value) {
    if (pos < numOperands) {
        operands[pos] = value;
    }
}

void ExpressionEvaluator::setOperands(double ops[], size_t n) {
    for (size_t i = 0; i < std::min(n, numOperands); ++i) {
        operands[i] = ops[i];
    }
}
