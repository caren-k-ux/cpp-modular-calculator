#include <iostream>
#include <cmath>

//a program to compute a simple calculator 

class simpleClassCalculator 
{
    private:
    double firstNumber{0.0};
    double secondNumber{0.0};
    double result{0.0};
    char operation{'\0'};

    public:
    void getOperandsAndOperator();
    void performCalculation();
    void displayCalculationResults();
};


void simpleClassCalculator::getOperandsAndOperator() 
{
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout <<"Enter the operator(+, -, /, x, ^, s for squareroot): ";
    std::cin >> operation;

    std::cout <<"Enter the second number: ";
    std::cin >> secondNumber;

}

void simpleClassCalculator::performCalculation() 
{
    switch (operation) 
    {
        case '+':
        result = firstNumber + secondNumber;
        break;

        case '-':
        result = firstNumber - secondNumber;
        break;

        case '/' :
        while (secondNumber == 0) {
            std::cout <<"Hey you cannot divide by zero! Please Enter a new second number: ";
            std::cin >> secondNumber;
        }

        result = firstNumber / secondNumber ;
        break;

        case 'x' :
        result = firstNumber * secondNumber;
        break;

        case '^' :
        result = std::pow(firstNumber, secondNumber);
        break;

        case 's' :
        result = std::sqrt(firstNumber);
        break;

        default:
        std::cout <<"Invalid Number; enter a valide output" <<'\n';
        break;

    


    }
}

void simpleClassCalculator::displayCalculationResults() 
{
    std::cout <<firstNumber << " " <<operation << " "<< secondNumber<< " = " << result << "\n";

}


int main() 
{
    simpleClassCalculator calc;
    calc.getOperandsAndOperator();

    calc.performCalculation();

    calc.displayCalculationResults();
}

