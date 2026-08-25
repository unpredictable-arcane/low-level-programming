#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numl, num2;

	printf("Enter num1: ");
	scanf("%f", &numl);
	printf("Enter num2: ");
	scanf("%f", &num2);

	if (numl > num2)
	{
		printf("MAX = %.1f \n", numl);
		printf("MINI = %.1f \n", num2);
	}
	else
	{
		printf("MAX = %.1f \n", num2);
		printf("MINI = %.1f \n", numl);
	}
	return 0;
}