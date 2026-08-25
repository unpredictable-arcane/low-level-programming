#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    scanf("%d", &grade);
    if (grade >= 85)
        printf("Congratulations! \n");
    else
        printf("Failed! Now worries, Better luck next time \n");
    return 0;
}
