#include <stdio.h>

int main()
{
	int num;
	int f0 = 0;
	int f1 = 1;
	int f2 = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num >= 0)
	{
		do{
			f2 = f1 + f0;
			printf("%d\n", f0);
			f0 = f1;
			f1 = f2;
		}while(f0 < num);
	}
}
