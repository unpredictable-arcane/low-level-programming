#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an EVEN number \n", num);
    else
        printf("%d is an ODD number \n", num);
    
    //if (num % 2 != 0)
    //    printf("%d is an ODD number \n", num);
    //else
    //    printf("%d is an EVEN number \n", num);
        return 0;
}