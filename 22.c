#include <stdio.h>

int main()
{
	int num1;
	int num2;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	if(num1 > num2)
	{
		printf("%d\n",num1);
	}
	else
	{
		printf("%d\n",num2);
	}
}

