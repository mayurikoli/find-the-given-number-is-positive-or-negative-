#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	if(number >> 31 == -1)
	{
		printf("%d is negative\n", number);
	}
	else
	{
		printf("%d is positive\n", number);
	}
	return 0;

}

