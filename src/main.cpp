#include <iostream>
#include <src/calculator/Calculator.hpp>

int main() {

    int number = -1;
    std::cout << "Input number: ";
    std::cin >> number;
    
    calculator::Calculator calculator;

    int level = 0;
    for (int data : calculator.reductionByLevels(number))
    {
        std::cout << "Reduction " << "(L:" << level << "):" << data << std::endl;
        level++;
    } 

    int addition = calculator.addition(number);
    std::cout << "Polarity: " << calculator.polarity(addition) << std::endl;

    //PITAGORIC
    std::pair<int, std::string> pitResult = calculator.pitagoric(number);
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "Pitagoric(" << pitResult.first << ", " << pitResult.second << ")" << std::endl;

    return 0;

}