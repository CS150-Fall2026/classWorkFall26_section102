#include <iostream>
#include <vector>
using namespace std;
void displayVector(const vector <int> &v);
int main()
{
    vector<int> numbers={1,2,3};
    displayVector(numbers);
    numbers.push_back(5);
    numbers.push_back(15);
    numbers.push_back(23);
    displayVector(numbers);
    numbers.pop_back();
    displayVector(numbers);
}
void displayVector(const vector <int> &v)
{
    for (size_t i{0}; i< v.size(); i++)
    {
        cout << v[i] << " "; 
    }
    cout<<endl;  
}