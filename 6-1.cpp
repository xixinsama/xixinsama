#include <stdio.h>

void fun(int i, int j, int k)
{
    int t;
    t = (i + j + k) / 2;
    printf("t = % d\n", t);
}

int main()
{
    int x, y, z;
    x = 4;
    y = 12;
    z = 6;
    fun(x, y, z);
    printf("x = %d; y = %d; z = %d\n", x, y, z);
    return 0;
}

