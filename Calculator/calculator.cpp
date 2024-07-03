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
    int choice;
    std::cout << "1. Sum" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Power" << std::endl;
    std::cout << "6. Square Root" << std::endl;
    std::cout << "7. Sine" << std::endl;
    std::cout << "8. Cosine" << std::endl;
    std::cout << "0. Exit" << std::endl;
    
    do 
    {
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        double num1, num2;
        if (choice >= 1 && choice <= 5)
        {
            std::cout << "Enter 2 numbers: ";
            std::cin >> num1 >> num2;
        }
        else
        {
            std::cout << "Enter 1 number: ";
            std::cin >> num1;
        }

        HybridCalculator calc;

        switch (choice)
        {
        case 1:
            calc.add(num1, num2);
            break;
        case 2:
            calc.subtract(num1, num2);
            break;
        case 3:
            calc.multiply(num1, num2);
            break;
        case 4:
            calc.divide(num1, num2);
            break;
        case 5:
            calc.powerOf(num1, num2);
            break;
        case 6:
            calc.squareRootOf(num1);
            break;
        case 7:
            calc.sineOf(num1);
            break;
        case 8:
            calc.cosineOf(num1);
            break;
        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
        }
    }while (choice != 0);
    return 0;
}