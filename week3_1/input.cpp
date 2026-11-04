#include <iostream>
using namespace std;

int main()
{
    // cout <<"Press \"Enter\" to continue ...";
    // char input{};
    // //cin >> input; //it will not work;
    // cin.get(input);
    // //cout<<input<<endl;
    // string sentence{}; // initialize with empty string
    // cout << "Enter a sentence: ";
    // getline(cin, sentence);
    // cout << "You entered the sentence: " << sentence << '\n';

    int age {0};
    cout << "Enter age as integer: ";
    cin >> age;
    cin.ignore(); // clear '\n' that was left from the cin statement
    string name {};
    cout << "Enter name: ";
    getline(cin>>ws, name);
    cout << name << " is " << age << " years old.\n";

    return 0;
}
