#include <iostream>

using namespace std;

void fun(const int *p, int a, int *b)
{
    a = *p + *b;
    *b = a + *p;
}
int main()
{
    int x = 5, y = 10;
    int *ptr;
    *ptr = 20;
    fun(ptr, x, &y);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "*ptr=" << *ptr << endl;
}
