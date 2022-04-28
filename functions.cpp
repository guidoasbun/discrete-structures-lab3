//
// Created by Guido Asbun on 4/27/22.
//

#include "functions.h"
#include <cmath>

int earthTemp(int temp, int numYears)
{
    // Earth's current average temperature is 61 degerees
    // Fahrenheit. Suppose Earth's temperature rises by 3 degrees every
    // year.  Write a function that takes the starting temperature, a
    // number of years, and returns the temperature of the Earth after that
    // many years have passed.
    //
    // Do not use any loops or recursion.

    return (temp + (numYears * 3));
}

int requiredFood(int startWeight, int foodNeeded, int finalWeight)
{
    // Suppose an animal requires twice as much food
    // for every pound it gains. Write a function that takes the starting
    // weight of the animal, a final weight, the amount of food the animal
    // needs when at the start weight, and returns the amount of food the
    // animal needs when it weighs the final weight.
    //
    // Do not use any loops or recursion.

    return static_cast<int>(foodNeeded * pow(2, (finalWeight - startWeight)));
}

int numChickens(int startChickens, int numYears)
{
    return 0;
}