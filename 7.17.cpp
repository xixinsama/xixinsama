#include <stdio.h>
#include <string.h>

void convert(int n);
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    convert(n);
    
    return 0;
}

void convert(int n)
{
    int i;
    int a[] = {n,n/10,n/100};
    for (i=0;i<=n;i++)
    {
        a[i]=a[i]+48;
    }
    for (i=0;i<=n;i++)
    {
        printf("%c",a[i]);
    }
}