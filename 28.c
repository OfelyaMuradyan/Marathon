#include <stdio.h>

int main()
{
	int num1;
	int num2;

	printf("Enter 2 numbers: ");
	scanf("%i %i", &num1, &num2);

	if((num2 != 0 && num1 % num2 == 0) || (num1 != 0 && num2 % num1 == 0))
		printf("Yes\n");
	else
		printf("No\n");

}
