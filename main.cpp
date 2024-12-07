#include "Summator.h"
#include "CustomExpressionEvaluator.h"
#include "IShuffle.h"
#include <iostream>

int main() {
    ExpressionEvaluator* evaluators[2];

    double customOperands[] = {5, 15, -8, 1, 2, 3};
    evaluators[0] = new CustomExpressionEvaluator(6);
    evaluators[0]->setOperands(customOperands, 6);

    evaluators[1] = new Summator(3);
    evaluators[1]->setOperand(0, 1.5);
    evaluators[1]->setOperand(1, -4);
    evaluators[1]->setOperand(2, 2.5);

    for (size_t i = 0; i < 2; ++i) {
        evaluators[i]->logToScreen();
        evaluators[i]->logToFile("log.txt");
        delete evaluators[i];
    }

    return 0;
}