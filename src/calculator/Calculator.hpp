#pragma once

#include <vector>
#include <string>

namespace calculator
{

    class Calculator
    {
        public:
            std::vector<int> generalReduction(int number);
            int reduction(int number);
            int addition(int number);
            std::string polarity(int number);

        private:
            std::vector<int> splitNumber(const std::string& number);

    };

}

