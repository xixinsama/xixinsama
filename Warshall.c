#include <stdio.h>
int main()
{
	int a[4][4];
	printf("Please input your matrix \n");
	int i, j, k;
	for (i = 0; i < 4; i++)  //ÊäÈë¾ØÕó
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == 1)
			{
				for (k = 0; k < 4; k++)
					a[i][k] = a[j][k] + a[i][k];
			}
		}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			if (a[i][j] != 0)
				a[i][j] = 1;
	}
	printf("output:\n");
	for (i = 0; i < 4; i++) //Êä³ö¾ØÕó
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}