#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	while(num > 0)
	{
		sum += (num % 10);
		num /= 10;
	}

	printf("%d\n", sum);

}
