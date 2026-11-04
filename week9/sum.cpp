#include <iostream>
using namespace std;
double computeSum(double arr[], int size);
int findMax(double arr[], int size);
int main()
{
    double num[]{5.5, -2.2, 3.3, -4.4, 5.5};
    int size = sizeof(num)/sizeof(double);
    cout<< computeSum(num, size)<<endl;
    cout <<"Max index is "<<findMax(num, size)<<endl;
}
//Write the function computeSum, 
//which accepts the array of doubles and the size of the array, 
//and returns the sum of all elements in the array.
double computeSum(double arr[], int size)
{
    double sum{0};
    for (int i{0}; i<size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
/**
 * @brief Find the maximum element in the array
 * 
 * @param arr array of doubles
 * @param size size of the array
 * @return int index of the first maximum
 */
int findMax(double arr[], int size)
{
    double max{arr[0]};
    int maxIndex{0};
    for (int i{1}; i<size; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}