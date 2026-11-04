#include <iostream>
#include <iomanip>
using namespace std;
void printPiramid(int n);
int main()
{
    cout <<"Enter int: ";
    int n{};
    cin >> n;
    printPiramid(n);
    return 0;
}
void printPiramid(int n)
{
    for (int row {1}; row<=n; row++)
    {
        // for (int space{1}; space<=(n-row); space++)
        // {
        //     cout <<' ';
        // }
        cout<<setw(n-row+1);
        for (int star{1}; star<=row ; star++)
        {
            cout <<'*';
        }
        cout <<endl;
    }
}