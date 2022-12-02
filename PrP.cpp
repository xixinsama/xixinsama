#include <stdio.h>
void r(int a[4][4]);
void inr(int a[4][4]);
void s(int a[4][4]);
void as(int a[4][4]);
void an(int a[4][4]);
void t(int a[4][4]);
void c(int a[4][4]);
void in(int a[4][4]);
int main()
{
	int a[4][4];
	int i, j;
	printf("please input a matrix A\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	r(a);
	inr(a);
	s(a);
	as(a);
	an(a);
	t(a);
	c(a);
	in(a);
}
void r(int a[4][4])
{
	int i, j = 0;
	for (i = 0; i < 4; i++)

		if (a[i][i] == 1)
		{

			j++;
		}
	if (j == 4)
		printf("A is reflexive\n");
	else
		printf("A is not reflexive\n");
}
void inr(int a[4][4])
{
	int i, j = 0;
	for (i = 0; i < 4; i++)

		if (a[i][i] == 0)
		{
			j++;
		}
	if (j == 4)
		printf("A is inreflexive\n");
	else
		printf("A is not inreflexive\n");
}
void s(int a[4][4])
{
	int i, j, k = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)

			if (a[i][j] == 1 && a[j][i] == 1)
			{
				k = 1;
				break;
			}
	if (k == 1)
		printf("A is symmetric\n");

	else
		printf("A is  not symmetric\n");
}
void as(int a[4][4])
{
	int i, j, k = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)

			if ((a[i][j] == 1 && a[j][i] == 0) || (a[i][j] == 0 && a[j][i] == 1))
			{
				k = 1;
				break;
			}
	if (k == 1)
		printf("A is asymmetric\n");
	else
		printf("A is not asymmetric\n");
}
void an(int a[4][4])
{
	int i, j, k = 0;
	for (i = 0; i < 4; i++)
		for (j = 0, i != j; j < 4; j++)

			if (a[i][j] == 0 || a[j][i] == 0)
			{
				k = 1;
				break;
			}
	if (k == 1)
		printf("A is antisasymmetric\n");
	else
		printf("A is not antisymmetric\n");
}
void t(int a[4][4])
{
	int i, j, k, l = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 4; k++)

				if (a[i][j] == 1 && a[j][k] == 1 && a[i][k] == 1)
				{
					l = 1;
					break;
				}
	if (l == 1)
		printf("A is transitive\n");
	else
		printf("A is not transitive\n");
}

void c(int a[4][4])
{

	int i, j;
	printf("The complement of the A matrix is\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == 1)
				printf("0 ");
			if (a[i][j] == 0)
				printf("1 ");
		}
		printf("\n");
	}
}
void in(int a[4][4])
{
	int b[4][4], i, j, n = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			b[j][i] = a[i][j];
	printf("The inverse of the A matrix is\n");
	for (i = 0; i < 4; i++)
	{

		for (j = 0; j < 4; j++)
		{

			printf("%d ", b[i][j]);
			n++;
			if (n % 4 == 0)
			{
				printf("\n");
			}
		}
	}
}