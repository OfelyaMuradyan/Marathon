#include <stdio.h>

int main()
{
	char sym;
	printf("Enter a character from A to Z: ");
        scanf("%c", &sym);

	if(sym >= 'A' && sym <= 'Z')
	{
		sym += 32;
	}

	else 
	{
		printf("It is not capital letter.\n");
		return 0;
	}

	printf("%c\n", sym);
}
