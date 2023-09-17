#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	int count1 = 0;
	int count2 = 0;

	printf("Enter text: ");
	scanf("%100c", text);

	for(int i = 0; i < strlen(text); i++)
	{
		if(text[i] == 'a' || text[i] == 'i' || text[i] == 'u' || text[i] == 'o' || text[i] == 'e' || text[i] == 'A' || text[i] == 'O' || text[i] == 'I' || text[i] == 'U' || text[i] == 'E')
		{
			count1 += 1;
		}

		else if((text[i] >= 66 && text[i] <= 90) || (text[i] >= 98 && text[i] <= 122))
			count2 += 1;
	}

	printf("vowel is %d, consonant is %d\n", count1, count2);
}
