#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;

	printf("Enter 4 numbers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 + num2 + num3 + num4 == 0)
	{
		if(num1 < num2 && num1 < num3 && num1 < num4)
		{
			printf("%d\n", num1);
		}
		else if (num2 < num1 && num2 < num3 && num2 < num4)
			printf("%d\n", num2);
		else if (num3 < num1 && num3 < num2 && num3 < num4)
			printf("%d\n", num3);
		else
			printf("%d\n", num4);
	}
}

