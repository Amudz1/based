#ifndef EXPRESSIONEVALUATOR_H
#define EXPRESSIONEVALUATOR_H

#include "ILoggable.h"
#include <cstddef> // For size_t

class ExpressionEvaluator : public ILoggable {
protected:
    size_t numOperands;
    double* operands;
public:
    ExpressionEvaluator(size_t n = 20);
    virtual ~ExpressionEvaluator();

    void setOperand(size_t pos, double value);
    void setOperands(double ops[], size_t n);

    virtual double calculate() const = 0;
    virtual void logToScreen() const override = 0;
    virtual void logToFile(const std::string& filename) const override = 0;
};

#endif // EXPRESSIONEVALUATOR_H