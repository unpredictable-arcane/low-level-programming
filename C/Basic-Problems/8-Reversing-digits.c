#include <stdio.h>

int main()
{
	int num;
	int reversedNum;
	int units, tens, hundreds;

	printf("Enter a 3-digit number: ");
	scanf("%d", &num);

	units = num % 10;
	tens = (num / 10) % 10; 
	hundreds = num / 100; 
	
	reversedNum = units; 
	reversedNum = reversedNum * 10 + tens; 
	reversedNum = reversedNum * 10 + hundreds; 

	// printf("Reversed Number of %d is: %d%d%d \n", num, units, tens, hundreds);
	
	printf("Reversed Number of %d = %d \n", num, reversedNum);
	return 0;
}