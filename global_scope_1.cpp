#include <iostream>

using namespace std;

int staticCheck(int any)
{
    extern int counter2;
    static int counter = 0;
    counter = counter + any;
    counter2++;
    return counter;
}

int counter2 = 8;

int main()
{
    cout << counter2 << endl;
    cout << staticCheck(5) << endl;
    cout << staticCheck(15) << endl;
    cout << counter2 << endl;
}