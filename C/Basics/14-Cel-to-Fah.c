#include<stdio.h>

int main()
{
    double fah, cel;

    printf("Enter degrees in Celcius: ");
    scanf("%lf", &cel);

    fah = cel * 1.8 + 32;

    printf("Conversion of %.2lf Celcius degrees is %.2lf Fahrenheit Degrees\n", cel, fah);
    return 0;
}