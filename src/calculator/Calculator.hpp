#pragma once

#include <vector>
#include <string>

namespace calculator
{

    class Calculator
    {
        public:
            std::vector<int> reductionByLevels(int number);
            int reduction(int number);
            int addition(int number);
            std::string polarity(int number);
            std::pair<int, std::string> pitagoric(int number);

        private:
            std::vector<int> splitNumber(const std::string& number);

    };

}

