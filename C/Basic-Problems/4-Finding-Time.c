#include <stdio.h>

int main()
{
	int distance;
	int speed;

	printf("Enter the distance travelled: ");
	scanf("%f", &distance);
	printf("Enter the speed at you travelled: ");
	scanf("%f", &speed);

	int hours = distance / speed; 
	float speedInMinutes = speed / 60.0; 
	float remainingMinutes = (distance % speed) / speedInMinutes;

	printf("The time from A to B will take %d hours and %.1f minutes\n", hours, remainingMinutes);
	return 0;
}