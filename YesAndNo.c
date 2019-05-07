#include <stdio.h>

int main()
{
	char Action;

	printf("What are you going to do? (Y, N): ");
	scanf("%c", &Action);
	if(Action == 'Y')
	{
		printf("You turned the lights on\n");
	}
	else if(Action == 'N')
	{
		printf("You turned the lights off\n");
	}
	else
	{
		printf("Yeah thats not a function\n");
	}
	return 0;
}