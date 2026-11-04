// This program has two functions, main and displayMessage
#include <iostream>
using namespace std;

// Function prototypes 
void displayMessage();  // function prototype

// all programs start executing in main function
int main()
{
    cout << "Hello from main.\n";
    displayMessage();   // function call, observe the format
    cout << "Now we are back in the main function again.\n";
    return 0;
}

// Function definitions
/**
 * @brief Write a description on what the function does
 *
 */
void displayMessage()  // function header
{
    cout << "Hello from the displayMessage function.\n";
}
