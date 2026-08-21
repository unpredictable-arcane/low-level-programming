#include<stdio.h>

int main()
{
    double fah, cel;

    printf("Enter degrees in Fahrenheit: ");
    scanf("%lf", &fah);

    cel = (fah - 32) / 1.8;

    printf("Conversion of %.2lf Fahrenheit degrees is %.2lf Celcius Degrees\n", fah, cel);
    return 0;
}