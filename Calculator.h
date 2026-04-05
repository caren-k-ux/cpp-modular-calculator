#ifndef CALCULATOR_H
#define CALCULATOR_H
class Calculator
{
    private:
    double firstNumber{0.0};
    double secondNumber{0.0};
    double result{0.0};
    char operation{'\0'};

    public:
    void calculatorMenu();
    void getOperandsAndOperator();
    void performCalculation();
    void displayCalculationResults();

};


#endif

