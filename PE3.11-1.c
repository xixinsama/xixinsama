/*exercise 3.11-1*/
#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    int big_int = 2147483648; //2的31次方减1
    float big_float = 3.4e38;
    float small_float = 10.0/3;
    printf("The big int date is %d\n",big_float);
    printf("The big float date is %f\n",big_float*2);
    printf("The small float date is %f\n",small_float);
    
    printf("The MAX float date is %f\n",FLT_MAX);
    printf("The MAX int date is %d\n",INT_MAX);
    printf("The MIN int date is %d\n",INT_MIN);

    getchar();
    return 0;
}