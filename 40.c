#include <stdio.h>

int main()
{
	int pahvats = 49;
	int num;

	do{
		printf("Enter a number: ");
		scanf("%d", &num);

		if(num > pahvats +10)
		{
			printf("Gushakutyuny shat bardzr e.\n");
		}
		else if(num < pahvats - 10)
			printf("Gushakutyuny shat catsr e\n");
		else
			printf("Mutqagrvats tivy mot e mtapahvats tvin\n");

	}while(num != pahvats);

	printf("Duq mutqagrel eq mtapahvats tivy\n");
}
