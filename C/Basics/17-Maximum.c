#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;

	printf("Enter any two numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 > num2)
		printf("Max Verstappen = %d\n", num1);
	else
		printf("Max Verstappen = %d\n", num2);
	return 0;
}