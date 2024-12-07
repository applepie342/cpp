#pragma once
#include <string>

namespace anyHuman
{
    enum humAge
    {
        roman = 25,
        alina = 19,
        anton = 10,
        anna = 9,
    };

    std::string correctAlpha(std::string str);
    int correctCount(int count);
}
