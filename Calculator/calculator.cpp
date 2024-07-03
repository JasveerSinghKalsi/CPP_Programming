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
#include "math_func.h"

int main()
{
    HybridCalculator hybridCalculator;
    int input;
    int num1, num2;
    std::cout << "Enter 2 numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter 1 for Simple Calculator and 2 for Scientific Calculator: ";
    std::cin >> input;
    if (input == 1)
    {
        hybridCalculator.displayCalculator(input, num1, num2);
    }
    else if (input == 2)
    {
        hybridCalculator.displayCalculator(input, num1, num2);
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
    return 0;
}