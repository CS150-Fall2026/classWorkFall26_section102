// SECTION 1. Include headers
#include "functions.h"
#include <iostream>
using namespace std;

// SECTION 4. The main function
int main()
{
    cout << "Enter the number (1 - 10): ";
    int input = getInput(1,10);
    cout << "the area of the circle with r = " << input
         << " is " <<getCircleArea(input) <<endl;

}
