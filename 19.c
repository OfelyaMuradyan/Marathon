#include <stdio.h>

int main()
{
        int A = 0;
        int B = 0;
        int C = 0;

        for(A = 0; A <= 1; A++)
        {
                for(B = 0; B <= 1; B++)
                {
                        C = !(A && B) || A && !B || A;
                        printf("%d %d is %d\n", A , B, C);
                }
        }
}
