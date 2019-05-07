#include <stdio.h>

int main()
{
	while(1)
	{
		GatherVal();
	}

	return 0;
}

void GatherVal()
{
	FILE *fp;
	char string1[100];
	fp = fopen("Output.txt","a");

	printf("Enter a value: ");
	gets(string1);



	fprintf(fp, string1);

	fclose(fp);

	printf("\nYou entered: ");
	puts(string1);

}
