#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    cout << "Earth Temp: " << earthTemp(20, 0) << endl;
    cout << "Expected: 20\n";
    cout << "Earth Temp: " << earthTemp(20, 1) << endl;
    cout << "Expected: 23\n";
    cout << "Earth Temp: " << earthTemp(40, 5) << endl;
    cout << "Expected: 55\n";
    cout << "Earth Temp: " << earthTemp(0, 0) << endl;
    cout << "Expected: 113\n";

    cout << "--------------------------\n";

    cout << "Required Food: " << requiredFood(100, 5, 100) << endl;
    cout << "Expected: 5\n";
    cout << "Required Food: " << requiredFood(5, 1, 10) << endl;
    cout << "Expected: 32\n";
    cout << "Required Food: " << requiredFood(1, 100, 2) << endl;
    cout << "Expected: 200\n";
    cout << "Required Food: " << requiredFood(0, 0, 0) << endl;
    cout << "Expected: 57344\n";

    cout << "--------------------------\n";

    cout << "Number of Chickens: " << numChickens(5, 0) << endl;
    cout << "Expected: 5\n";
    cout << "Number of Chickens: " << numChickens(3, 6) << endl;
    cout << "Expected: 113707\n";
    cout << "Number of Chickens: " << numChickens(1, 10) << endl;
    cout << "Expected: 42000323\n";
    cout << "Number of Chickens: " << numChickens(0, 0) << endl;
    cout << "Expected: 3307\n";


    return 0;
}
