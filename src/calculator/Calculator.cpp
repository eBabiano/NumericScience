#include "Calculator.hpp"
#include <cstdlib>
#include <iostream>

namespace calculator
{
    std::vector<int> Calculator::generalReduction(int number)
    {
        int redNum = number;
        std::vector<int> reductionVector;

        if (redNum > 9)
        {
            while (redNum > 9)
            {
                redNum = reduction(redNum);
                reductionVector.push_back(redNum);
            }
        }
        else if (redNum < 9 && redNum > 0)
        {
            redNum = reduction(redNum);
            reductionVector.push_back(redNum);
        }
        else
        {
            reductionVector.push_back(-1);
        }

        return reductionVector;
    }

    int Calculator::reduction(int number)
    {
        std::vector<int> digits = splitNumber(std::to_string(number));
        int reduction = 0;

        for (int digit : digits)
        {
            reduction += digit;
        }

        return reduction;
    }

    int Calculator::addition(int number)
    {
        int record = number;
        int decrement = number;

        while (decrement >= 1) 
        {
            decrement = decrement - 1;
            record = record + decrement;
        }
        return record;
    }

    std::string Calculator::polarity(int number)
    {
        std::string polarity = "null";

        

        return polarity;
    }

    std::vector<int> Calculator::splitNumber(const std::string& number)
    {
        std::vector<int> numberVector;

        for (char digit : number)
        {
            int digitNum = std::atoi(&digit);
            numberVector.push_back(digitNum);
        }

        return numberVector;
    }

}
