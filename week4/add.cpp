#include <iostream>

using namespace std;

double average(int n1, int n2);

int main()
{
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 1: ";
    cin >> num2;
    
    // double aver;
    // aver = average(num1, num2);
    cout << "the average of " << num1 << " and " << num2
            << " is " << average(num1, num2) <<endl;    //fix the output

    return 0;
}
double average(int n1, int n2)
{
    // double aver = (n1 + n2)/2.0;
    // return aver;
    return (n1 + n2)/2.0;
}
