#include <stdio.h>
#include <stdlib.h>

int x;

int main(void)
{
    int y;
    char *str;

    y = 4;
    printf("stack memory: %d\n", y);
    
    str = malloc(2 * sizeof(char));
    str[0] = 'm';
    str[1] = 't';
    printf("heap memory: %c\n", str[1]);
    free(str);
}