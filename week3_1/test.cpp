#include <iostream>
#include <iomanip>
using namespace std; 

int main(void)
{
    float f {1.0/3};
    double d {1.0/3};
    cout <<"f = " << f <<'\n';
    cout <<"d = " << d <<'\n';
    cout <<"f = " <<fixed <<setprecision(20)<< f <<'\n';
    cout <<"d = " <<fixed <<setprecision(20)<< d <<'\n';

    int rainfall {static_cast<int>(3.88)};    
    cout << rainfall<<endl;  // Displays ?

    // bool b{}; // default initialize to false
    // cout << "Enter any intege value: ";
    // cin >> b;
    // cout << "You entered: " << b << '\n';

    char leter{65};
    cout <<leter<<endl;


    return 0;
}


