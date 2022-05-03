//
// Created by Guido Asbun on 4/27/22.
//

#include "functions.h"
#include <cmath>

using namespace std;

int earthTemp(int temp, int numYears)
{
    return (temp + (numYears * 3));
}

int requiredFood(int startWeight, int foodNeeded, int finalWeight)
{
    return static_cast<int>(foodNeeded * pow(2, (finalWeight - startWeight)));
}

int numChickens(int startChickens, int numYears)
{
    int totalChickens{startChickens};
        for (int i{0}; i < numYears; ++i)
        {
            totalChickens = static_cast<int>(totalChickens - floor(totalChickens / 4)) + ((totalChickens * 10) / 2);
        }

    return totalChickens;
}