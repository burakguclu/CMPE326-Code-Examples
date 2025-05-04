#include <iostream>

using namespace std;

int a = 5;
int fun1()
{
    a = 10;
    return 12;
}
int main()
{
    a = a + fun1();
    cout << "a=" << a;
    return 0;
}