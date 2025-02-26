#include <stdio.h>
#include <stdlib.h>

int a = 2;
int x = 1;

int f1(int a);
int f2(int *qx);

int f1(int a)
{
    int b = x;
    int *px;
    printf("Enter f1 %d\n", a);
    px = (int *)malloc(2 * sizeof(int));
    *px = a - b;
    px[1] = a;
    if (*px > 1)
        b = f2(px);
    return (b);
}

int f2(int *qx)
{
    static int a = 2;
    printf("Enter f2 %d\n", *qx);
    if (qx)
        free(qx);
    a = f1(a);
    return (a);
}

int main()
{
    int x = 2;
    f1(a + x);
    return 0;
}