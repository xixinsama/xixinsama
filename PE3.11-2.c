/*exercise 3.11-2*/
#include <stdio.h>
int main(void)
{
    int ascii;
    
    printf("Enter an ASCII code:");
    scanf("%d",&ascii);
    printf("%d is the ASCII code for %c.\n",ascii,ascii);
    getchar();
    getchar(); //需要两个getchar()才能停住程序
    return 0;
}