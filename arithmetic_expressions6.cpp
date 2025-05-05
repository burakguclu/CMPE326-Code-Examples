#include <iostream>

using namespace std;

int g = 0;
int f1(int x)
{
    return x + 1;
}
int f2(int x)
{
    g++;
    return x + g;
}
int main()
{
    int x = 2, y = 5;
    int i = f2(x) + f2(y) * (f2(x) - f2(x));
    cout << "i=" << i << endl;
    cout << "g=" << g << endl;
}