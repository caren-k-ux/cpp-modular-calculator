#include <iostream>
#include "Calculator.h"

int main()
{
    std::cout << "====Welcome to our Calculator app====" << '\n';
    std::cout << "_____________________________________" << '\n';
    Calculator calc;
    calc.getOperandsAndOperator();

    calc.performCalculation();

    calc.displayCalculationResults();
}

