#include "Calculator.hpp"
#include <cstdlib>
#include <iostream>

namespace calculator
{
    std::vector<int> Calculator::reductionByLevels(int number)
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

        std::vector<int> levels = reductionByLevels(number);
        int reduction = levels.at(levels.size()-1);

        if (reduction == 1 || reduction == 3)
        {
            polarity = "Positive";
        }
        else if (reduction == 6)
        {
            polarity = "Negative";
        }
        else if (reduction == 9)
        {
            polarity = "Neutral";
        }

        return polarity;
    }

    std::pair<int, std::string> Calculator::pitagoric(int number)
    {
        std::pair<int, std::string> result;

        int pitDiv = number / 9;
        int pitMul = pitDiv * 9;
        int rest = number - pitMul;

        result.first = rest;

        bool isPair = rest % 2 == 0;
        if (rest == 9)
        {
            result.second = "Neutral";
        }
        else if (isPair)
        {
            result.second = "Positive";
        }
        else
        {
            result.second = "Negative";
        }

        return result;
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
