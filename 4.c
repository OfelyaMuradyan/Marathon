#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("Enter two numbers: ");
	scanf("%i %i", &num1, &num2);
	
	int total = num1 + num2;
	printf("%i\n", total);
}
