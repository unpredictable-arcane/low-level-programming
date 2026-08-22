#include <stdio.h>

int main()
{
    float a1, a, S; // a1 = first term, a = nth term, S = Sum
    int n; // No. of terms 

    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the n-th Term (a): ");
    scanf("%f", &a);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    
    S = (a1 + a) * n / 2;
    
    printf("The sum of your sequence = %.2f\n", S);
    return 0;
}