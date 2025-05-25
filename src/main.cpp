#include <iostream>
#include <src/calculator/Calculator.hpp>

int main() {

    int number = 5;
    
    calculator::Calculator calculator;

    int level = 0;
    for (int data : calculator.generalReduction(number))
    {
        std::cout << "Reduction " << "(L:" << level << "):" << data << std::endl;
        level++;
    } 

    std::cout << "Addition: " << calculator.addition(number) << std::endl;

    return 0;

}