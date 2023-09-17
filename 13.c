#include <stdio.h>

int main()
{
	float Cel;
	printf("Enter a temperature։ ");
	scanf("%f", &Cel);

	float Far = (Cel * 9 / 5 + 32);
        printf("%f\n", Far);	
}
