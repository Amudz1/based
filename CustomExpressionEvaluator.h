#ifndef CUSTOMEXPRESSIONEVALUATOR_H
#define CUSTOMEXPRESSIONEVALUATOR_H

#include "ExpressionEvaluator.h"

class CustomExpressionEvaluator : public ExpressionEvaluator {
public:
    using ExpressionEvaluator::ExpressionEvaluator;

    double calculate() const override;
    void logToScreen() const override;
    void logToFile(const std::string& filename) const override;
};

#endif // CUSTOMEXPRESSIONEVALUATOR_H