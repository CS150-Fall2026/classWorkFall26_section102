/**
 * @file arr2D.cpp
 * @author Ekaterina Miller
 * @brief Write a function that displays an array to the screen with the sum of all 
 * elements for each row and column. The output for the 3 x 3 array should be simulated to 
 * the one below.
 * @version 0.1
 * @date 2026-10-27
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_ROW {3};
const int NUM_COL{3};

void print2DwithSum(int arr[][NUM_COL]);

int main()
{
    int num[NUM_ROW][NUM_COL] { {1, 2, 3},
                                {3, 4, 6},
                                {-4, 0, 8}};
    print2DwithSum(num);
                
}
void print2DwithSum(int arr[][NUM_COL])
{
    int columnSums[NUM_COL+1]{0};
    //go throught each row
    for(int r{0}; r<NUM_ROW; r++)
    {
        int sum{0};
        //go throught each element in the row
        for(int c{0}; c<NUM_COL; c++)
        {
            cout <<setw(3) << arr[r][c];
            sum = sum + arr[r][c];
            columnSums[c] = columnSums[c] + arr[r][c];
        }//done printing row
        cout<<'|'<<setw(3)<<sum<<'\n';
        columnSums[NUM_COL] = columnSums[NUM_COL] + sum;
    }
    cout<<"-------------\n";
    for (int c{0}; c<NUM_COL; c++)
    {
        cout <<setw(3) << columnSums[c];
    }
    cout<<'|'<<setw(3)<<columnSums[NUM_COL]<<'\n';
}