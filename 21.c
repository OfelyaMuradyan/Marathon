#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a letter: ");
	scanf("%c", &ch);

	if(ch == 'a' || ch == 'i' || ch == 'u' || ch == 'o' || ch == 'e' || ch == 'A' || ch == 'O' || ch == 'I' || ch == 'U' || ch == 'E')
	{
		printf("dzaynavor\n");
	}
	else if((ch >= 66 && ch <= 90) || (ch >= 98 && ch <= 122))
	{
		printf("baghadzayn\n");
	}
}
