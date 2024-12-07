#ifndef SUMMATOR_H
#define SUMMATOR_H

#include "ExpressionEvaluator.h"

class Summator : public ExpressionEvaluator {
public:
    using ExpressionEvaluator::ExpressionEvaluator;

    double calculate() const override;
    void logToScreen() const override;
    void logToFile(const std::string& filename) const override;
};

#endif // SUMMATOR_H