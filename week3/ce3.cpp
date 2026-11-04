#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double  deposit = 100,
            rate = 0.06,
            numberOfDeposits = 12,
            numberOfYears = 20,
            balance;

    balance= deposit*(pow(1+rate/numberOfDeposits, numberOfDeposits*numberOfYears)-1)/(rate/numberOfDeposits);
    cout<<"Your account balance after "<<numberOfYears
         <<" years is $" <<setprecision(2) << balance<<'\n';
    return 0;
}
