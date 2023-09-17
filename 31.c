#include <stdio.h>

int main()
{
        for(int i = 0; i < 101; i++)
        {
		if(i & 1 == 1)
                	printf("%d\n", i);
        }
}


