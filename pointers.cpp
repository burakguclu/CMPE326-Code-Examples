#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    char b = 'x';
    void *p = &a; // void pointer holds address of int a
    p = &b;       // void pointer holds address of char 'b'
    char *c = (char *)p;
    char c2 = *(char *)p;
    cout << *c << endl;
    cout << c2;
    return 0;
}