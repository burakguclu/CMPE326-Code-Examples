#include <iostream>

using namespace std;

int counter2 = 8;
int counter = 0;

int staticCheck(int any)
{
    counter = counter + any;
    counter2++;
    return counter;
}

int main()
{
    cout << counter2 << endl;
    cout << staticCheck(5) << endl;
    cout << staticCheck(15) << endl;
    cout << counter2 << endl;
}