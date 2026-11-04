#include <iostream>
using namespace std;
int main()
{
    int num1{5},num2{6};
    {
        int num1,num2;
        num1 = num2 = 0;
    }
    // cout <<"Enter the two integer number: ";
    // cin >> num1 >>num2;
    cout <<"You enter "<<num1 << " and " << num2<<endl;
    return 0;
}
