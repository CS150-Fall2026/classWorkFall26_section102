#include "functions.h"
#include <iostream>

// SECTION 5. Function definitions
int getInput(int min, int max)
{
    int input{};
    while(1)
    {
        std::cin >> input;
        if (input < min || input > max){
            std::cout << "Your input must be between " << min
                 << " and " << max << std::endl;
        } else{
            return input;
        }
    }
}
double getCircleArea(int r)
{
    return PI*r*r;
}
