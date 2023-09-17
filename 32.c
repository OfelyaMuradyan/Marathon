#include <stdio.h>

int main()
{
	int num;
	int num1 = 0;
	printf("Enter a number: ");
	scanf("%i", &num);

	if (num >12)
	{
		while(num > 0)
		{
			num1 *= 10;
			num1 += num % 10;
			num /= 10;
		}

		printf("%d\n", num1);
	}

	else
		printf("invalid input\n");
}
