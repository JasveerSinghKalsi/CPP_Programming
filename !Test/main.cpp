#include <iostream> //For Inputs and Outputs
#include <string> //For Strings and Arrays
#include <array> //For STL Arrays
#include <vector> //For Vectors
#include <cmath> //For Mathematics functions
#include <cstdlib> //For Dynamic Memory, Random Number
#include <ctime> //For Date and Time
#include <limits> //For Arithmetic characteristics
#include <climits> //For defined Constants

int main()
{
    int data[] = {1,2,3,4,5,6};

    for (int n : data)
    {
        std::cout << n << "\t";
    }
    std::cout << "\n";
        
    return 0;
}