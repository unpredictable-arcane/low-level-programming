#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int temp;

	printf("a = % d\n", a);
	printf("b = % d\n\n", b); 
    // We'll take a third container, to balance out 
	// cuz, a = b, b = a obv can't work...
	
	temp = a;
	a = b;
	b = temp;

	printf("a = % d\n", a);
	printf("b = % d\n", b);
}