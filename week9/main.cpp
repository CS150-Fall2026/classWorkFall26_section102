#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 10;
void printArray(const int arr[], int size);
void setTo(int val, int arr[], int size);
int main()
{
    int numbers[SIZE]{};
    ifstream file("numbers.txt");
    if (!file){
        cerr<<"ERROR opening file\n";
        exit(1);
    }
    // for (int i{0}; i<SIZE && file.peek()!=EOF;i++){
    //     file >> numbers[i];
    // }
    int i{0};
    while(i<SIZE && file >> numbers[i])
    {
        i++;
    }
    int size=i;
    //display array
    cout <<"Size of array in main "<<sizeof(numbers)<<endl;
    printArray(numbers, size);
    cout <<"\n\n";
    setTo(20, numbers, SIZE);
    //display array
    printArray(numbers, SIZE);
    cout <<endl;
    file.close();
    // char name[] = "Ekaterina Miller";
    // cout<<name<<endl;
    // name[9] = '\0';
    // cout<<static_cast<void *>(name)<<endl;
}

void printArray(const int arr[], int size)
{
    for (int i{0}; i<size;i++){
        cout<< arr[i]<<" at adress "<< &arr[i] <<endl;
    }
}

void setTo(int val, int arr[], int size)
{
    for (int i{0}; i<size;i++){
        arr[i] = val;
    }
}