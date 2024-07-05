/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
#include "math_func.h"

int main()
{
    double num1, num2;

    std::cout << "Enter two numbers: ";
    scanf("%lf %lf", &num1, &num2);

    HybridCalculator calc;

    calc.setNumbersSimple(num1, num2);
    calc.displaySimpleCalucator();
    calc.setNumbersScientfic(num1);
    calc.displayScientificCalculator();

    return 0;
}