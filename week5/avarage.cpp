#include <iostream>

using namespace std;

//functions prototypes
double averageWhile(int n1, int n2);
double averageDoWhile(int n1, int n2);
double averageFor(int n1, int n2);

int main()
{
    int number1, number2;

    cout << "Enter two integers" << endl;
    cin >> number1 >> number2;

    cout << "Output using While Loop\n";
    cout << "The average is " << averageWhile(number1, number2) << endl;

    cout << "Output using Do While Loop\n";
    cout << "The average is " << averageDoWhile(number1, number2) << endl;

    cout << "Output using For Loop\n";
    cout << "The average is " << averageFor(number1, number2) << endl;

    return 0;
}

double averageWhile(int n1, int n2)
{
    if (n2 < n1){
        int temp{n2};
        n2 = n1;
        n1 = temp;
    }
    int total{0};
    int num {n1};
    while(num <= n2)
    {
        total = total + num;
        num++;
    }
    return static_cast<double>(total)/(n2-n1+1);
}
double averageDoWhile(int n1, int n2)
{
       if (n2 < n1){
        int temp{n2};
        n2 = n1;
        n1 = temp;
    }
    int total{0};
    int num {n1};
    do
    {
        total = total + num;
        num++;
    }while(num <= n2);
    return static_cast<double>(total)/(n2-n1+1);
}
double averageFor(int n1, int n2)
{
       if (n2 < n1){
        int temp{n2};
        n2 = n1;
        n1 = temp;
    }
    int total{0};
    
    for(int num {n1}; num <= n2; num++)
    {
        total = total + num;
       
    }
    return static_cast<double>(total)/(n2-n1+1);
}