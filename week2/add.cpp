/**
 * @file add.cpp
 * @author Ekaterina Miller
 * @brief This program asks the user to enter two numbers 
 *          Display the total on the screen.
 * @date 2026-09-03
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    //Ask user for two numbers
    cout << "Enter two numbers separated by space: ";
    double num1{}, num2{};
    cin >> num1 >>num2;
    //stores the sum of these two numbers in a variable named total
    double total{};
    total= num1 + num2;
    //Display the total on the screen
    cout<<"The total = " <<total<<'\n';
    return 0;
}