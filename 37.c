#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	printf("Enter a number: ");
	scanf(" %d", &num);

	for(i = i; i <= num; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
