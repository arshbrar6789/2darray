#include<stdio.h>

int main()
{
	int arry[3][5],i,j;  // Declaring a 2D array and number of elements in an array is (size of row X size of columns)

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("Enter Row %d and column%d:", i, j);
			scanf_s("%d", &arry[i][j]);
			printf("\n");
		}
	}


	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%d\t", arry[i][j]);
		}
		printf("\n");
	}
	return(0);
}