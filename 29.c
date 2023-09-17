#include <stdio.h>

int main()
{
	char ch1;
	char ch2;

	printf("Enter a character: ");
	scanf("%c", &ch1);
	printf("Enter a character: ");
	scanf(" %c", &ch2);

	if(ch1 >= 'A' && ch1 <= 'Z')
	{
		if (ch2 == ch1 + 32)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	else if (ch1 >= 'a' && ch2 <= 'z')
	{
		if (ch2 == ch1 - 32)
		{
			printf("Yes\n");
		}
		else 
			printf("No\n");
	}
	else
		printf("invalid input\n");

}
