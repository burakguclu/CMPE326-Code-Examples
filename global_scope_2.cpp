#include <iostream>

using namespace std;

int counter2 = 8;

int staticCheck(int any)
{
    int counter2;
    static int counter = 0;
    counter = counter + any;
    counter2++; // local
    return counter;
}

int main()
{
    cout << counter2 << endl;
    cout << staticCheck(5) << endl;
    cout << staticCheck(15) << endl;
    cout << counter2 << endl;
}