#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char again{'y'};
    while(tolower(again) == 'y')
    {
        int num;
        do
        {
            cout <<"Enter the positive integer from 1 to 20: ";
            cin >>num;
        } while (num <1 || num >20);
        
        //int maxSpace {num-1};
        for (int row{1}; row<=num; row++){
            for (int space{1}; space <= num - row; space++){
                cout <<" ";
            }
            for (int star{1}; star <= 2*row -1; star++){
                cout <<"*";
            }
            // maxSpace--;
            cout <<endl;
        }
        cout <<"Do you want to do another piramid (y/n): ";
        cin >> again;
    }
}