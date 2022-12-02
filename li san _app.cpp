#include<stdio.h>
void input(int[256][256], int, int);
void output(int[256][256], int, int);
void conjunction(int[256][256], int[256][256], int[256][256], int, int);
void disjunction(int[256][256], int[256][256], int[256][256], int, int);
void booleanmult(int[256][256], int[256][256], int[256][256], int, int, int);
int main ()
{
	int array1[256][256], a, b, array2[256][256], array3[256][256], array4[256][256], c,e
		,array5[256][256], array6[256][256], array7[256][256],m=2;
	printf("A:");
	scanf("%d%d", &a, &b);
	printf("B:");
	input(array1, a, b);
	printf("C:");
	input(array2, a, b);
	conjunction(array3, array1, array2, a, b);
	disjunction(array4, array1, array2, a, b);
	booleanmult(array7,array1,array2,m,m,m);
	printf("\n");
	output(array3, a, b);
	printf("\n");
	output(array4, a, b);
	printf("\n");
	output(array7, m, m);
}
void input(int array[256][256], int a, int b)
{
	int i, j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
}
void conjunction(int array[256][256],int array1[256][256],int array2[256][256],int a, int b)
{
	int i ; int j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			array[i][j] = array1[i][j] * array2[i][j];
		}

	}

}
void disjunction(int array[256][256], int array1[256][256], int array2[256][256], int a, int b)
{
	int i; int j;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			array[i][j] = array1[i][j] + array2[i][j];
			if (array[i][j] > 1)
				array[i][j] = 1;
		}

	}

}
void booleanmult(int array[256][256], int array1[256][256], int array2[256][256], int a, int b,int c)
{
	int i, j, k;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			for (k = 0; k < c; k++)
			{
				array[i][j] = array[i][j] + array1[i][k] * array2[k][j];
				if (array[i][j] > 1)
					array[i][j] = 1;
			}
		}
	}
}
void output(int array[256][256], int a, int b)
{
	int i ; int j;
	for (i = 0; i < a; i++)
	{
		printf("\n");

		for (j = 0; j < b; j++)
		{
			printf("%d", array[i][j]);
			printf("\t");
		}
	}
}