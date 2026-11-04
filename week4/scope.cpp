#include <iostream>
using namespace std;
void foo(int n);

const int x{5};

int main()
{  
    int y = 7;
    foo(y);
    cout <<"x = " <<x<<'\n';
}
void foo(int n)
{
    cout <<x<<'\n';
}