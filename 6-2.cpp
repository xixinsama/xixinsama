#include <stdio.h>

void f(int i, int j);

int main()
{
    int i, j, x, y, n, g;
    i = 4;
    j = 5;
    g = x = 6;
    y = 9;
    n = 7;
    f(n, 6);
    printf("g=%d;i=%d;j=%d\n", g, i, j);
    printf("x = % d; y = % d\n", x, y);
    f(n, 8);
    
    return 0;
}
 
void f(int i, int j)
{
    int x, y, g;
    g = 8;
    x = 7;
    y = 2;
    printf("g = % d; i = % d; j = % d\n", g, i, j);
    printf("x = % d; y = % d\n", x, y);
}
