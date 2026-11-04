#include <iostream>
using namespace std;

int addNumber(int num); // function prototype

int main()
{
    cout <<"Adding 1...\n Total  = "<<addNumber(1)<<endl;
    cout <<"Adding 2...\n Total  = "<<addNumber(2)<<endl;
    cout <<"Adding 3...\n Total  = "<<addNumber(3)<<endl;
    cout <<"Adding 4...\n Total  = "<<addNumber(4)<<endl;
    return 0;
}
// Function definition
/**
 * @brief Add num to the total
 * 
 * @param num value to add
 * @return int returns total
 */
int addNumber(int num) //function header
{
    static int total{0};
    total+=num;
    return total;
}
