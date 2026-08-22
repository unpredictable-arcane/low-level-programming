#include <stdio.h>

int main()
{
	float salary;
	int totalHours;

	printf("Enter your Salary Per Hour: ");
	scanf("%f", &salary);

	printf("Enter the number of hours you worked in the last month: ");
	scanf("%d", &totalHours);

	printf("Your expected salary should be: %.1f\n", salary * totalHours);
	return 0;
}
