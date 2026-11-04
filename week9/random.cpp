#include <iostream>
#include <cstdlib>
#include <ctime> // time()
#include <string>
using namespace std;

int main()
{
    string words[4]={"home", "school", "table", "work"};
    //seed for random numbers
    srand(time(NULL));
    //generates a random index from 0 to 3
    int index= rand()%4;
    //prints the word with the specific index
    cout << words[index]<<endl;
    //get the length of the word
    int sizeOfWord=words[index].length();
    //You should not do it by hand. Assuming you have an array of char filled up with '_'
    char visibleLetters[13]={'-', '-','-', '-', '-', '-','-','-','-', '-','-','-'};
    visibleLetters[sizeOfWord]='\0';
    //now you can refer to visibleLetters as a string
    cout << visibleLetters<<endl;
    return 0;
}
