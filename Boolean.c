#include <stdio.h>

int main()
{
	int LightState = 0;
	char Action;

	printf("What are you going to do? (Y, N): ");
	scanf("%c", &Action);

	if(Action == 'Y')
	{
		printf("You turned the lights on\n");
		LightState = 1;
	}
	else if(Action == 'N')
	{
		printf("You turned the lights off\n");
		LightState = 0;
	}
	else
	{
		printf("Yeah thats not a function\n");
	}

	printf("%d\n",LightState);
	return 0;
}