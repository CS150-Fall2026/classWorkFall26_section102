#include <iostream>
using namespace std;

void initializeAlphabet(char array[], int arraySize);
void dispalayArray(char array[], int arraySize);

const int NUM_LETTERS = 26;
int main()
{
    char availableLetters[NUM_LETTERS+1]{};
    initializeAlphabet(availableLetters, NUM_LETTERS);
    //dispalayArray(availableLetters, NUM_LETTERS);
    cout<<availableLetters<<endl;
    cout<<"Please enter your guess: ";
    char guess;
    cin >>guess;
    availableLetters[guess-'a'] = '\0';
    cout<<availableLetters<<endl;
    return 0;
}
void initializeAlphabet(char array[], int arraySize)
{
    for (int i{0}; i<arraySize; i++){
        array[i]=i+'a';
    }
}
void dispalayArray(char array[], int arraySize)
{
    for (int i{0}; i<arraySize; i++){
        cout << array[i];
    }
    cout <<endl;
}
