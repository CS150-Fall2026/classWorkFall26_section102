#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("myFile.txt");
    if(!file)
    {
        cerr<<"Error opening file\n";
        exit(1);
    }
    file << "Apples\n";
    file << "Milk\n";
    file << "Watter\n";
    file.close();
    for (int x = 1, y = 1; x <= 5; ++x, ++y)
    {
        cout << "Hello" << '\n';
    }
}