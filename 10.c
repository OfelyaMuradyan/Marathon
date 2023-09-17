#include <stdio.h>

int main()
{
	char sym;
	printf("Enter a symbol: ");
	scanf("%c", &sym);

	if (sym >= '0' && sym <= '9')
	{
		printf("True\n");
	}
	else
		printf("False\n");
}
