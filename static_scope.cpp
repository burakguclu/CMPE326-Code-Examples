#include <iostream>

using namespace std;

int i = 1;

int main()
{
    i = 2;

    {
        int i = 3;
        cout << i;
        for (i = 1; i <= 3; i++)
        {
            cout << i;
        }
        cout << i;
    }

    cout << i;

    for (i = 3; i <= 5; i++)
    {
        cout << i;
    }

    cout << i;
}