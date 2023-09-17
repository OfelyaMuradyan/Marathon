#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "a1sdf fds1a4444";

	for(int i = 0; i < strlen(arr) / 2 + 1; i++)
	{
		if(arr[i] != arr[strlen(arr) - i - 1])
		{
			printf("False\n");
			return 0;
		}
	}

	printf("True\n");

}
