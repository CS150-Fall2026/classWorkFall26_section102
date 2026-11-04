#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()
using namespace std;
int pickRandom(int min, int max);

int main()
{
    srand(time(NULL));
    cout << pickRandom(10, 20)<<endl;
    cout << pickRandom(10, 20)<<endl;
    cout << pickRandom(10, 20)<<endl;
}

int pickRandom(int min, int max)
{
    return rand()%(max-min+1)+min;
}