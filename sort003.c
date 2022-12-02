#include <stdio.h>
#include <math.h>
void main()
{
    int i, j, k, m, a[10] = {2, 1, 8, 9, 4, 5, 3, 7, 6, 0};
    for (j = 1; j < 10; j++)
    {
        i = 0;
        while (a[j] >= a[i] && i<9)
        {
            i++;
        }
        m = a[j];
        for (k = 0; k <= (fabs(j - i)-1); k++)
        {
            a[j - k] = a[j - k - 1];
            a[i] = m;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%2d", a[i]);
    }
}