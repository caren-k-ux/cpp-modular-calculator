#include <iostream>
#include <cmath>
#include "Calculator.h"

void Calculator::calculatorMenu() 
{
    std::cout << "====Calculator Menu====" << '\n';
    std::cout <<  "1. Addition(+)\n";
    std::cout << "2. Subtraction(-) \n";
    std::cout << "3. Multiplication(x) \n";
    std::cout << "4. Division(/) \n";
    std::cout << "5.Square Root(s) \n";
    std::cout << "6. Exponential(p) \n";
    std::cout << "Enter the choice of operation you wanna choose:" ;
    std::cin >> operation;
}

void Calculator::getOperandsAndOperator()
{
    std::cout << "Enter the First Number: " ;
    std::cin >> firstNumber;

    calculatorMenu();

    if (operation != '5')
    {
        std::cout << "Enter the second Number: ";
        std::cin >> secondNumber;
    }



}

void Calculator::performCalculation() 
{
    switch (operation) 
    {
        case '1':
        operation = '+';
        result = firstNumber + secondNumber;
        break;

        case '2':
        operation = '-';
        result = firstNumber - secondNumber;
        break;

        case '3':
        operation = 'x';
        result = firstNumber * secondNumber;
        break;

        case '4' :
        operation = '/';
        while(secondNumber == 0)
        {
            std::cout <<"Hey you cannot divide by zero! Please enter a valid Number!!" << '\n';
            std::cin >> secondNumber;

        }

        result = firstNumber / secondNumber;
        break;

        case '5':

        if (firstNumber >= 0) 
        {
            result = std::sqrt(firstNumber) ;
            

        }
        else 
        {
            std::cout << "Error:Squareroot of a negative number is not possible in this calculator\n";
            result = 0.0;
        }
        break;

        case '6' :
        operation = 'p';
        result = pow(firstNumber, secondNumber);
        break;

        default:
        std::cout << "Invalid Number, enter a valid output." << '\n';



    }
    
}

void Calculator::displayCalculationResults() 
{
    if (operation != '5') 
    {
        std::cout << "The result is: " << '\n';
        std::cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << '\n';
    }

    else 
    {
        std::cout << "The squareroot of " << firstNumber << " is " << result << '\n';
    }
}