#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Enter x, y: ");
	scanf("%i %i", &x , &y);

	if(y == 0)
	{
		printf("y can not be 0.");
		return 0;
	}

	printf("%lf\n", (float)(x * y + 21 * x / y - 200));
}
