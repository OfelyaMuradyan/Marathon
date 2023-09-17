#include <stdio.h>

int main()
{
	int a = 15;
	int b = 30;
	int sum = 0;
	int k = a;

	while(k >= a && k <= b)
	{
		if(k % 2 == 0)
		{
			sum += k;
		}
		k++;
	}

	printf("%d\n", sum);
}
