#include <stdio.h>

int main()
{
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);

	printf("%lf\n", x / (5 + 2) + 30 * x - 51);
}
