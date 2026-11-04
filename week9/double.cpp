#include <iostream>
#include <iterator> // for std::size and std::ssize
using namespace std;

void print(const int arr[], int size);
void doubleArray(int arr[], int size);
//WRITE FUNCTION PROTOTYPE FOR doubleArray here
int main()
{
    const int SIZE = 5;
    int numbers[] = {1, 2, 4, 8, 9};
    print(numbers, SIZE);
    //CALL doubleArray
    doubleArray(numbers, SIZE);
    print(numbers, SIZE);
    cout<<numbers<<endl;

    return 0;
}
void print(const int arr[], int size)
{
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}
//WRITE FUNCTION DEFINITION FOR doubleArray here
/**
 * @brief doubles each element of the array
 * 
 * @param arr array of int
 * @param size size of the array
 */
void doubleArray(int arr[], int size)
{
    for (int i = 0; i<size; i++){
        arr[i] = 2*arr[i];//or arr[i]*=2;
    }
}
