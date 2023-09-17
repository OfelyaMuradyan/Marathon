#include <stdio.h>

int main()
{
	float grade = 91.39;

	if(grade >= 90 && grade <=100)
	{
		printf("A class\n");
	}
	else if(grade >= 80 && grade <= 89)
	{
		printf("B class\n");
	}
	else if(grade >= 70 && grade <= 79)
		printf("C class\n");
	else if(grade >= 60 && grade <= 69)
		printf("D class\n");
	else if(grade >= 0 && grade < 60)
		printf("E class\n");
}

