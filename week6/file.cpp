#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int main()
{
    ifstream file("data/students.csv");
    if(!file){
        cerr << "Error opening file\n";
        exit(1);
    }
    while(file.peek()!=EOF)
    {
        int id{};
        file >> id;
        char delim;
        file >>delim;
        string name{};
        getline(file, name, ',');
        int age{};
        file >> age >>delim;
        char gender{};
        file >>gender>>delim;
        int g1, g2, g3;
        file >> g1 >> delim >> g2 >> delim >> g3>>delim;
        // file.get();
        cout <<id <<" " <<name<< " " << age<<" " <<gender<<" "<<g1<<" "<<g2<<" "<<g3<<endl;
    }
    file.close();
    return 0;
}