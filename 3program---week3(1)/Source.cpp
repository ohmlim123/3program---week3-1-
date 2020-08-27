#include<stdio.h>
int main()
{
	int A, N,j;
	int max;
	int min;	

	scanf_s("%d", &A);
	scanf_s("%d", &N);

	max = N;
	min = N;

	for (j = 1;j <= A - 1;j++)
	{
		scanf_s("%d", &N);
		if (N < min)
		{
			min = N;
		}
		if (N > max)
		{
			max = N;
		}
	}
	printf("MAXIMUM IS :%d\n", min);
	printf("MINIMUM IS :%d", max);

	return 0;
}